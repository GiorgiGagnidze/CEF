WebInspector.SASSSupport={}
WebInspector.SASSSupport.parseCSS=function(parser,url,text)
{return parser.parsePromise(text).then(onParsed);function onParsed(parsedCSS)
{var document=new WebInspector.SASSSupport.ASTDocument(url,text);var rules=[];for(var i=0;i<parsedCSS.length;++i){var rule=parsedCSS[i];if(!rule.properties)
continue;var properties=[];for(var j=0;j<rule.properties.length;++j){var cssProperty=rule.properties[j];var name=new WebInspector.SASSSupport.TextNode(document,cssProperty.name,WebInspector.TextRange.fromObject(cssProperty.nameRange));var value=new WebInspector.SASSSupport.TextNode(document,cssProperty.value,WebInspector.TextRange.fromObject(cssProperty.valueRange));var property=new WebInspector.SASSSupport.Property(document,name,value,WebInspector.TextRange.fromObject(cssProperty.range),!!cssProperty.disabled);properties.push(property);}
rules.push(new WebInspector.SASSSupport.Rule(document,rule.selectorText,properties));}
return new WebInspector.SASSSupport.AST(document,rules);}}
WebInspector.SASSSupport.parseSCSS=function(url,text,tokenizerFactory)
{var document=new WebInspector.SASSSupport.ASTDocument(url,text);var result=WebInspector.SASSSupport._innerParseSCSS(document,tokenizerFactory);var rules=[new WebInspector.SASSSupport.Rule(document,"variables",result.variables),new WebInspector.SASSSupport.Rule(document,"properties",result.properties),new WebInspector.SASSSupport.Rule(document,"mixins",result.mixins)];return new WebInspector.SASSSupport.AST(document,rules);}
WebInspector.SASSSupport.SCSSParserStates={Initial:"Initial",PropertyName:"PropertyName",PropertyValue:"PropertyValue",VariableName:"VariableName",VariableValue:"VariableValue",MixinName:"MixinName",MixinValue:"MixinValue",Media:"Media",}
WebInspector.SASSSupport._innerParseSCSS=function(document,tokenizerFactory)
{var lines=document.text.split("\n");var properties=[];var variables=[];var mixins=[];var States=WebInspector.SASSSupport.SCSSParserStates;var state=States.Initial;var propertyName,propertyValue;var variableName,variableValue;var mixinName,mixinValue;var UndefTokenType={};function processToken(tokenValue,tokenTypes,column,newColumn)
{var tokenType=tokenTypes?tokenTypes.split(" ").keySet():UndefTokenType;switch(state){case States.Initial:if(tokenType["css-variable-2"]){variableName=new WebInspector.SASSSupport.TextNode(document,tokenValue,new WebInspector.TextRange(lineNumber,column,lineNumber,newColumn));state=States.VariableName;}else if(tokenType["css-property"]||tokenType["css-meta"]){propertyName=new WebInspector.SASSSupport.TextNode(document,tokenValue,new WebInspector.TextRange(lineNumber,column,lineNumber,newColumn));state=States.PropertyName;}else if(tokenType["css-def"]&&tokenValue==="@include"){mixinName=new WebInspector.SASSSupport.TextNode(document,tokenValue,new WebInspector.TextRange(lineNumber,column,lineNumber,newColumn));state=States.MixinName;}else if(tokenType["css-comment"]){if(tokenValue.substring(0,2)!=="/*"||tokenValue.substring(tokenValue.length-2)!=="*/")
break;var uncommentedText=tokenValue.substring(2,tokenValue.length-2);var fakeRuleText="a{\n"+uncommentedText+"}";var fakeDocument=new WebInspector.SASSSupport.ASTDocument("",fakeRuleText);var result=WebInspector.SASSSupport._innerParseSCSS(fakeDocument,tokenizerFactory);if(result.properties.length===1&&result.variables.length===0&&result.mixins.length===0){var disabledProperty=result.properties[0];var offset=column+2;var nameRange=new WebInspector.TextRange(lineNumber,disabledProperty.name.range.startColumn+offset,lineNumber,disabledProperty.name.range.endColumn+offset);var valueRange=new WebInspector.TextRange(lineNumber,disabledProperty.value.range.startColumn+offset,lineNumber,disabledProperty.value.range.endColumn+offset);var name=new WebInspector.SASSSupport.TextNode(document,disabledProperty.name.text,nameRange);var value=new WebInspector.SASSSupport.TextNode(document,disabledProperty.value.text,valueRange);var range=new WebInspector.TextRange(lineNumber,column,lineNumber,newColumn);var property=new WebInspector.SASSSupport.Property(document,name,value,range,true);properties.push(property);}}else if(tokenType["css-def"]&&tokenValue==="@media"){state=States.Media;}
break;case States.VariableName:if(tokenValue===")"&&tokenType===UndefTokenType){state=States.Initial;}else if(tokenValue===":"&&tokenType===UndefTokenType){state=States.VariableValue;variableValue=new WebInspector.SASSSupport.TextNode(document,"",WebInspector.TextRange.createFromLocation(lineNumber,newColumn));}else if(tokenType!==UndefTokenType){state=States.Initial;}
break;case States.VariableValue:if(tokenValue===";"&&tokenType===UndefTokenType){variableValue.range.endLine=lineNumber;variableValue.range.endColumn=column;var variable=new WebInspector.SASSSupport.Property(document,variableName,variableValue,variableName.range.clone(),false);variable.range.endLine=lineNumber;variable.range.endColumn=newColumn;variables.push(variable);state=States.Initial;}else{variableValue.text+=tokenValue;}
break;case States.PropertyName:if(tokenValue===":"&&tokenType===UndefTokenType){state=States.PropertyValue;propertyName.range.endLine=lineNumber;propertyName.range.endColumn=column;propertyValue=new WebInspector.SASSSupport.TextNode(document,"",WebInspector.TextRange.createFromLocation(lineNumber,newColumn));}else if(tokenType["css-property"]){propertyName.text+=tokenValue;}
break;case States.PropertyValue:if((tokenValue==="}"||tokenValue===";")&&tokenType===UndefTokenType){propertyValue.range.endLine=lineNumber;propertyValue.range.endColumn=column;var property=new WebInspector.SASSSupport.Property(document,propertyName,propertyValue,propertyName.range.clone(),false);property.range.endLine=lineNumber;property.range.endColumn=newColumn;properties.push(property);state=States.Initial;}else{propertyValue.text+=tokenValue;}
break;case States.MixinName:if(tokenValue==="("&&tokenType===UndefTokenType){state=States.MixinValue;mixinName.range.endLine=lineNumber;mixinName.range.endColumn=column;mixinValue=new WebInspector.SASSSupport.TextNode(document,"",WebInspector.TextRange.createFromLocation(lineNumber,newColumn));}else if(tokenValue===";"&&tokenType===UndefTokenType){state=States.Initial;mixinValue=null;}else{mixinName.text+=tokenValue;}
break;case States.MixinValue:if(tokenValue===")"&&tokenType===UndefTokenType){mixinValue.range.endLine=lineNumber;mixinValue.range.endColumn=column;var mixin=new WebInspector.SASSSupport.Property(document,mixinName,(mixinValue),mixinName.range.clone(),false);mixin.range.endLine=lineNumber;mixin.range.endColumn=newColumn;mixins.push(mixin);state=States.Initial;}else{mixinValue.text+=tokenValue;}
break;case States.Media:if(tokenValue==="{"&&tokenType===UndefTokenType)
state=States.Initial;break;default:console.assert(false,"Unknown SASS parser state.");}}
var tokenizer=tokenizerFactory.createTokenizer("text/x-scss");var lineNumber;for(lineNumber=0;lineNumber<lines.length;++lineNumber){var line=lines[lineNumber];tokenizer(line,processToken);processToken("\n",null,line.length,line.length+1);}
return{variables:variables,properties:properties,mixins:mixins};}
WebInspector.SASSSupport.ASTDocument=function(url,text)
{this.url=url;this.text=text;this.edits=[];}
WebInspector.SASSSupport.ASTDocument.prototype={clone:function()
{return new WebInspector.SASSSupport.ASTDocument(this.url,this.text);},newText:function()
{this.edits.stableSort(sequentialOrder);var text=this.text;for(var i=this.edits.length-1;i>=0;--i)
text=this.edits[i].applyToText(text);return text;function sequentialOrder(edit1,edit2)
{var range1=edit1.oldRange.collapseToStart();var range2=edit2.oldRange.collapseToStart();if(range1.equal(range2))
return 0;return range1.follows(range2)?1:-1;}},}
WebInspector.SASSSupport.Node=function(document)
{this.document=document;}
WebInspector.SASSSupport.TextNode=function(document,text,range)
{WebInspector.SASSSupport.Node.call(this,document);this.text=text;this.range=range;}
WebInspector.SASSSupport.TextNode.prototype={setText:function(newText)
{if(this.text===newText)
return;this.text=newText;this.document.edits.push(new WebInspector.SourceEdit(this.document.url,this.range,this.text,newText));},clone:function(document)
{return new WebInspector.SASSSupport.TextNode(document,this.text,this.range.clone());},__proto__:WebInspector.SASSSupport.Node.prototype}
WebInspector.SASSSupport.Property=function(document,name,value,range,disabled)
{WebInspector.SASSSupport.Node.call(this,document);this.name=name;this.value=value;this.range=range;this.name.parent=this;this.value.parent=this;this.disabled=disabled;}
WebInspector.SASSSupport.Property.prototype={clone:function(document)
{return new WebInspector.SASSSupport.Property(document,this.name.clone(document),this.value.clone(document),this.range.clone(),this.disabled);},visit:function(callback)
{callback(this);callback(this.name);callback(this.value);},setDisabled:function(disabled)
{if(this.disabled===disabled)
return;this.disabled=disabled;if(disabled){var oldRange1=WebInspector.TextRange.createFromLocation(this.range.startLine,this.range.startColumn);var edit1=new WebInspector.SourceEdit(this.document.url,oldRange1,"","/* ");var oldRange2=WebInspector.TextRange.createFromLocation(this.range.endLine,this.range.endColumn);var edit2=new WebInspector.SourceEdit(this.document.url,oldRange2,""," */");this.document.edits.push(edit1,edit2);return;}
var oldRange1=new WebInspector.TextRange(this.range.startLine,this.range.startColumn,this.range.startLine,this.name.range.startColumn);var text=this.document.text;var edit1=new WebInspector.SourceEdit(this.document.url,oldRange1,oldRange1.extract(text),"");var oldRange2=new WebInspector.TextRange(this.range.endLine,this.range.endColumn-2,this.range.endLine,this.range.endColumn);var edit2=new WebInspector.SourceEdit(this.document.url,oldRange2,"*/","");this.document.edits.push(edit1,edit2);},remove:function()
{console.assert(this.parent);var rule=this.parent;var index=rule.properties.indexOf(this);rule.properties.splice(index,1);this.parent=null;var lineRange=new WebInspector.TextRange(this.range.startLine,0,this.range.endLine+1,0);var oldRange;if(lineRange.extract(this.document.text).trim()===this.range.extract(this.document.text).trim())
oldRange=lineRange;else
oldRange=this.range;this.document.edits.push(new WebInspector.SourceEdit(this.document.url,oldRange,oldRange.extract(this.document.text),""));},__proto__:WebInspector.SASSSupport.Node.prototype}
WebInspector.SASSSupport.Rule=function(document,selector,properties)
{WebInspector.SASSSupport.Node.call(this,document);this.selector=selector;this.properties=properties;for(var i=0;i<this.properties.length;++i)
this.properties[i].parent=this;this._hasTrailingSemicolon=!this.properties.length||this.properties.peekLast().range.extract(this.document.text).endsWith(";");}
WebInspector.SASSSupport.Rule.prototype={clone:function(document)
{var properties=[];for(var i=0;i<this.properties.length;++i)
properties.push(this.properties[i].clone(document));return new WebInspector.SASSSupport.Rule(document,this.selector,properties);},visit:function(callback)
{callback(this);for(var i=0;i<this.properties.length;++i)
this.properties[i].visit(callback);},_addTrailingSemicolon:function()
{if(this._hasTrailingSemicolon||!this.properties)
return;this._hasTrailingSemicolon=true;this.document.edits.push(new WebInspector.SourceEdit(this.document.url,this.properties.peekLast().range.collapseToEnd(),"",";"))},insertProperty:function(nameText,valueText,disabled,anchorProperty,insertBefore)
{console.assert(this.properties.length,"Cannot insert in empty rule.");this._addTrailingSemicolon();var name=new WebInspector.SASSSupport.TextNode(this.document,nameText,WebInspector.TextRange.createFromLocation(10,0));var value=new WebInspector.SASSSupport.TextNode(this.document,valueText,WebInspector.TextRange.createFromLocation(10,0));var newProperty=new WebInspector.SASSSupport.Property(this.document,name,value,WebInspector.TextRange.createFromLocation(10,0),disabled);var index=this.properties.indexOf(anchorProperty);this.properties.splice(insertBefore?index:index+1,0,newProperty);newProperty.parent=this;var oldRange=insertBefore?anchorProperty.range.collapseToStart():anchorProperty.range.collapseToEnd();var indent=(new WebInspector.TextRange(anchorProperty.range.startLine,0,anchorProperty.range.startLine,anchorProperty.range.startColumn)).extract(this.document.text);if(!/^\s+$/.test(indent))indent="";var newText="";var leftComment=disabled?"/* ":"";var rightComment=disabled?" */":"";if(insertBefore){newText=String.sprintf("%s%s: %s;%s\n%s",leftComment,newProperty.name.text,newProperty.value.text,rightComment,indent);}else{newText=String.sprintf("\n%s%s%s: %s;%s",indent,leftComment,newProperty.name.text,newProperty.value.text,rightComment);}
this.document.edits.push(new WebInspector.SourceEdit(this.document.url,oldRange,"",newText));return newProperty;},__proto__:WebInspector.SASSSupport.Node.prototype}
WebInspector.SASSSupport.AST=function(document,rules)
{WebInspector.SASSSupport.Node.call(this,document);this.rules=rules;for(var i=0;i<rules.length;++i)
rules[i].parent=this;}
WebInspector.SASSSupport.AST.prototype={clone:function()
{var document=this.document.clone();var rules=[];for(var i=0;i<this.rules.length;++i)
rules.push(this.rules[i].clone(document));return new WebInspector.SASSSupport.AST(document,rules);},visit:function(callback)
{callback(this);for(var i=0;i<this.rules.length;++i)
this.rules[i].visit(callback);},findNodeForPosition:function(lineNumber,columnNumber)
{var result=null;this.visit(onNode);return result;function onNode(node)
{if(!(node instanceof WebInspector.SASSSupport.TextNode))
return;if(node.range.containsLocation(lineNumber,columnNumber))
result=node;}},__proto__:WebInspector.SASSSupport.Node.prototype}
WebInspector.SASSSupport.PropertyChangeType={PropertyAdded:"PropertyAdded",PropertyRemoved:"PropertyRemoved",PropertyToggled:"PropertyToggled",ValueChanged:"ValueChanged",NameChanged:"NameChanged"}
WebInspector.SASSSupport.PropertyChange=function(type,oldRule,newRule,oldPropertyIndex,newPropertyIndex)
{this.type=type;this.oldRule=oldRule;this.newRule=newRule;this.oldPropertyIndex=oldPropertyIndex;this.newPropertyIndex=newPropertyIndex;}
WebInspector.SASSSupport.ASTDiff=function(url,oldAST,newAST,mapping,changes)
{this.url=url;this.mapping=mapping;this.changes=changes;this.oldAST=oldAST;this.newAST=newAST;}
WebInspector.SASSSupport.diffModels=function(oldAST,newAST)
{console.assert(oldAST.rules.length===newAST.rules.length,"Not implemented for rule diff.");console.assert(oldAST.document.url===newAST.document.url,"Diff makes sense for models with the same url.");var T=WebInspector.SASSSupport.PropertyChangeType;var changes=[];var mapping=new Map();for(var i=0;i<oldAST.rules.length;++i){var oldRule=oldAST.rules[i];var newRule=newAST.rules[i];computeRuleDiff(mapping,oldRule,newRule);}
return new WebInspector.SASSSupport.ASTDiff(oldAST.document.url,oldAST,newAST,mapping,changes);function addChange(type,oldRule,newRule,oldPropertyIndex,newPropertyIndex)
{changes.push(new WebInspector.SASSSupport.PropertyChange(type,oldRule,newRule,oldPropertyIndex,newPropertyIndex));}
function computeRuleDiff(mapping,oldRule,newRule)
{var oldLines=[];for(var i=0;i<oldRule.properties.length;++i)
oldLines.push(oldRule.properties[i].name.text.trim()+":"+oldRule.properties[i].value.text.trim());var newLines=[];for(var i=0;i<newRule.properties.length;++i)
newLines.push(newRule.properties[i].name.text.trim()+":"+newRule.properties[i].value.text.trim());var diff=WebInspector.Diff.lineDiff(oldLines,newLines);diff=WebInspector.Diff.convertToEditDiff(diff);var p1=0,p2=0;for(var i=0;i<diff.length;++i){var token=diff[i];if(token[0]===WebInspector.Diff.Operation.Delete){for(var j=0;j<token[1];++j)
addChange(T.PropertyRemoved,oldRule,newRule,p1++,p2);}else if(token[0]===WebInspector.Diff.Operation.Insert){for(var j=0;j<token[1];++j)
addChange(T.PropertyAdded,oldRule,newRule,p1,p2++);}else{for(var j=0;j<token[1];++j)
computePropertyDiff(mapping,oldRule,newRule,p1++,p2++);}}}
function computePropertyDiff(mapping,oldRule,newRule,oldPropertyIndex,newPropertyIndex)
{var oldProperty=oldRule.properties[oldPropertyIndex];var newProperty=newRule.properties[newPropertyIndex];mapping.set(oldProperty.name,newProperty.name);mapping.set(oldProperty.value,newProperty.value);if(oldProperty.name.text.trim()!==newProperty.name.text.trim())
addChange(T.NameChanged,oldRule,newRule,oldPropertyIndex,newPropertyIndex);if(oldProperty.value.text.trim()!==newProperty.value.text.trim())
addChange(T.ValueChanged,oldRule,newRule,oldPropertyIndex,newPropertyIndex);if(oldProperty.disabled!==newProperty.disabled)
addChange(T.PropertyToggled,oldRule,newRule,oldPropertyIndex,newPropertyIndex);}};WebInspector.SASSWorkspaceAdapter=function(cssModel,workspace,networkMapping)
{this._workspace=workspace;this._networkMapping=networkMapping;this._cssModel=cssModel;this._versions=new Map();this._awaitingPromises=new Map();this._awaitingFulfills=new Map();this._urlToTrackers=new Multimap();this._cssURLs=new Set();this._eventListeners=[this._workspace.addEventListener(WebInspector.Workspace.Events.UISourceCodeAdded,this._uiSourceCodeAdded,this),this._workspace.addEventListener(WebInspector.Workspace.Events.UISourceCodeRemoved,this._uiSourceCodeRemoved,this),this._workspace.addEventListener(WebInspector.Workspace.Events.WorkingCopyChanged,this._uiSourceCodeChanged,this),this._workspace.addEventListener(WebInspector.Workspace.Events.WorkingCopyCommitted,this._uiSourceCodeChanged,this),this._cssModel.addEventListener(WebInspector.CSSStyleModel.Events.StyleSheetAdded,this._styleSheetAdded,this),this._cssModel.addEventListener(WebInspector.CSSStyleModel.Events.StyleSheetRemoved,this._styleSheetRemoved,this),this._cssModel.addEventListener(WebInspector.CSSStyleModel.Events.StyleSheetChanged,this._styleSheetChanged,this)];}
WebInspector.SASSWorkspaceAdapter.ContentResponse=function(url,version,text)
{this.url=url;this.version=version;this.text=text;}
WebInspector.SASSWorkspaceAdapter.prototype={trackSources:function(sourceMap)
{var cssURL=sourceMap.compiledURL();this._cssURLs.add(cssURL);var allSources=new Set(sourceMap.sources().concat(cssURL));for(var sourceURL of allSources){if(this._versions.has(sourceURL))
continue;this._versions.set(sourceURL,1);var promise=new Promise(fulfill=>this._awaitingFulfills.set(sourceURL,fulfill));this._awaitingPromises.set(sourceURL,promise);var contentProvider=sourceURL===cssURL?this._headersForURL(sourceURL).peekLast():this._sassUISourceCode(sourceURL);if(contentProvider)
this._contentProviderAdded(sourceURL);}
var tracker=new WebInspector.SourceMapTracker(this,sourceMap);for(var sourceURL of tracker.allURLs())
this._urlToTrackers.set(sourceURL,tracker);return tracker;},_stopTrackSources:function(tracker)
{for(var sourceURL of tracker.allURLs()){this._urlToTrackers.remove(sourceURL,tracker);if(!this._urlToTrackers.has(sourceURL)){this._awaitingFulfills.get(sourceURL).call(null,false);this._awaitingFulfills.delete(sourceURL);this._awaitingPromises.delete(sourceURL);this._versions.delete(sourceURL);this._cssURLs.delete(sourceURL);}}},_sassUISourceCode:function(url)
{return this._networkMapping.uiSourceCodeForURLForAnyTarget(url);},_headersForURL:function(url)
{return this._cssModel.styleSheetIdsForURL(url).map(styleSheetId=>this._cssModel.styleSheetHeaderForId(styleSheetId));},_contentProviderAdded:function(url)
{this._awaitingFulfills.get(url).call(null,true);},_contentProviderRemoved:function(url)
{var trackers=new Set(this._urlToTrackers.get(url));for(var tracker of trackers)
tracker.dispose();},_isSASSURL:function(url)
{return this._versions.has(url)&&!this._cssURLs.has(url);},_uiSourceCodeAdded:function(event)
{var uiSourceCode=(event.data);var url=this._networkMapping.networkURL(uiSourceCode);if(!this._isSASSURL(url))
return;this._contentProviderAdded(url);},_uiSourceCodeRemoved:function(event)
{var uiSourceCode=(event.data);var url=this._networkMapping.networkURL(uiSourceCode);if(!this._isSASSURL(url))
return;this._contentProviderRemoved(url);},_styleSheetAdded:function(event)
{var styleSheetHeader=(event.data);var url=styleSheetHeader.sourceURL;if(!this._cssURLs.has(url))
return;this._contentProviderAdded(url);},_styleSheetRemoved:function(event)
{var styleSheetHeader=(event.data);var url=styleSheetHeader.sourceURL;if(!this._cssURLs.has(url))
return;var headers=this._headersForURL(url);if(headers.length)
return;this._contentProviderRemoved(url);},_uiSourceCodeChanged:function(event)
{var uiSourceCode=(event.data.uiSourceCode);var url=this._networkMapping.networkURL(uiSourceCode);if(!this._isSASSURL(url))
return;this._newContentAvailable(url);},_styleSheetChanged:function(event)
{var styleSheetId=(event.data.styleSheetId);var styleSheetHeader=this._cssModel.styleSheetHeaderForId(styleSheetId);var url=styleSheetHeader.sourceURL;if(!this._cssURLs.has(url))
return;this._newContentAvailable(url);},_newContentAvailable:function(url)
{console.assert(this._versions.has(url),"The '"+url+"' is not tracked.")
var newVersion=this._versions.get(url)+1;this._versions.set(url,newVersion);for(var tracker of this._urlToTrackers.get(url))
tracker._newContentAvailable(url,newVersion);},_urlVersion:function(url)
{var version=this._versions.get(url);console.assert(version,"The '"+url+"' is not tracked.")
return version||0;},_getContent:function(url)
{console.assert(this._awaitingPromises.has(url),"The '"+url+"' is not tracked.")
return this._awaitingPromises.get(url).then(onContentProviderResolved.bind(this));function onContentProviderResolved(success)
{if(!success)
return Promise.resolve((null));var contentProvider=this._cssURLs.has(url)?this._headersForURL(url).peekLast():this._sassUISourceCode(url);if(!contentProvider)
return Promise.resolve((null));return contentProvider.requestContent().then(text=>new WebInspector.SASSWorkspaceAdapter.ContentResponse(url,(this._versions.get(url)),text||""));}},_setSASSText:function(url,text)
{console.assert(this._isSASSURL(url),"The url '"+url+"' should be a tracked SASS url");var uiSourceCode=this._sassUISourceCode(url);if(!uiSourceCode)
return null;setImmediate(()=>uiSourceCode.addRevision(text));var futureVersion=this._versions.get(url)+1;return new WebInspector.SASSWorkspaceAdapter.ContentResponse(url,futureVersion,text);},_setCSSText:function(url,text,cssEdits)
{console.assert(this._cssURLs.has(url),"The url '"+url+"' should be a tracked CSS url");var headers=this._headersForURL(url);if(!headers.length)
return null;for(var i=0;i<headers.length;++i)
this._cssModel.setStyleSheetText(headers[i].id,text,true);for(var i=cssEdits.length-1;i>=0;--i){var edit=cssEdits[i];var oldRange=edit.oldRange;var newRange=edit.newRange();for(var j=0;j<headers.length;++j){this._cssModel.dispatchEventToListeners(WebInspector.CSSStyleModel.Events.ExternalRangeEdit,{styleSheetId:headers[j].id,oldRange:oldRange,newRange:newRange});}}
var futureVersion=this._versions.get(url)+headers.length;return new WebInspector.SASSWorkspaceAdapter.ContentResponse(url,futureVersion,text);}}
WebInspector.SourceMapTracker=function(adapter,sourceMap)
{WebInspector.Object.call(this);this._adapter=adapter;this._sourceMap=sourceMap;this._cssURL=sourceMap.compiledURL();this._sassURLs=sourceMap.sources().slice();this._allURLs=this._sassURLs.concat(this._cssURL);this._terminated=false;this._versions=new Map();for(var url of this._allURLs)
this._versions.set(url,adapter._urlVersion(url));}
WebInspector.SourceMapTracker.Events={SourceChanged:"SourceChanged",TrackingStopped:"TrackingStopped"}
WebInspector.SourceMapTracker.prototype={sourceMap:function()
{return this._sourceMap;},allURLs:function()
{return this._allURLs;},cssURL:function()
{return this._cssURL;},sassURLs:function()
{return this._sassURLs;},isOutdated:function()
{if(this._terminated)
return true;for(var url of this._allURLs){if(this._adapter._urlVersion(url)>this._versions.get(url))
return true;}
return false;},setCSSText:function(text,edits)
{if(this._terminated||this.isOutdated())
return false;var result=this._adapter._setCSSText(this._cssURL,text,edits);this._handleContentResponse(result);return!!result;},setSASSText:function(url,text)
{if(this._terminated||this.isOutdated())
return false;var result=this._adapter._setSASSText(url,text);this._handleContentResponse(result);return!!result;},_handleContentResponse:function(contentResponse)
{if(!contentResponse)
return null;this._versions.set(contentResponse.url,contentResponse.version);return contentResponse.text;},content:function(url)
{return this._adapter._getContent(url).then(this._handleContentResponse.bind(this)).then(text=>text||"");},dispose:function()
{if(this._terminated)
return;this._terminated=true;this._adapter._stopTrackSources(this);this.dispatchEventToListeners(WebInspector.SourceMapTracker.Events.TrackingStopped);},_newContentAvailable:function(url,newVersion)
{if(this._versions.get(url)<newVersion)
this.dispatchEventToListeners(WebInspector.SourceMapTracker.Events.SourceChanged,url);},__proto__:WebInspector.Object.prototype};WebInspector.SASSLiveSourceMap={}
WebInspector.SASSLiveSourceMap._loadMapping=function(tracker,cssParser,tokenizer)
{var sassModels=new Map();var cssAST=null;var promises=[];for(var url of tracker.sassURLs()){var sassPromise=tracker.content(url).then(text=>WebInspector.SASSSupport.parseSCSS(url,text,tokenizer)).then(ast=>sassModels.set(url,ast));promises.push(sassPromise);}
var cssPromise=tracker.content(tracker.cssURL()).then(text=>WebInspector.SASSSupport.parseCSS(cssParser,tracker.cssURL(),text)).then(ast=>cssAST=ast);promises.push(cssPromise);return Promise.all(promises).then(()=>WebInspector.SASSLiveSourceMap.CSSToSASSMapping.fromSourceMap(tracker.sourceMap(),cssAST,sassModels)).catchException((null));}
WebInspector.SASSLiveSourceMap.CSSToSASSMapping=function(cssAST,sassModels)
{this._cssAST=cssAST;this._sassModels=sassModels;this._cssToSass=new Map();this._sassToCss=new Multimap();}
WebInspector.SASSLiveSourceMap.CSSToSASSMapping.fromSourceMap=function(sourceMap,cssAST,sassModels)
{var mapping=new WebInspector.SASSLiveSourceMap.CSSToSASSMapping(cssAST,sassModels);cssAST.visit(map);return mapping;function map(cssNode)
{if(!(cssNode instanceof WebInspector.SASSSupport.TextNode))
return;var entry=sourceMap.findEntry(cssNode.range.endLine,cssNode.range.endColumn);if(!entry||!entry.sourceURL||typeof entry.sourceLineNumber==="undefined"||typeof entry.sourceColumnNumber==="undefined")
return;var sassAST=sassModels.get(entry.sourceURL);if(!sassAST)
return;var sassNode=sassAST.findNodeForPosition(entry.sourceLineNumber,entry.sourceColumnNumber);if(sassNode)
mapping.mapCssToSass(cssNode,sassNode);}}
WebInspector.SASSLiveSourceMap.CSSToSASSMapping.prototype={cssAST:function()
{return this._cssAST;},sassModels:function()
{return this._sassModels;},mapCssToSass:function(css,sass)
{this._cssToSass.set(css,sass);this._sassToCss.set(sass,css);},unmapCssFromSass:function(css,sass)
{this._cssToSass.delete(css);this._sassToCss.remove(sass,css);},toSASSNode:function(css)
{return this._cssToSass.get(css)||null;},toCSSNodes:function(sass)
{var cssNodes=this._sassToCss.get(sass);return cssNodes?cssNodes.valuesArray():[];},toSASSProperty:function(cssProperty)
{var sassName=this._cssToSass.get(cssProperty.name);return sassName?sassName.parent:null;},toCSSProperties:function(sassProperty)
{return this.toCSSNodes(sassProperty.name).map(name=>name.parent);},rebaseForCSSDiff:function(cssDiff)
{var newMapping=new WebInspector.SASSLiveSourceMap.CSSToSASSMapping(cssDiff.newAST,this._sassModels);var cssNodes=this._cssToSass.keysArray();for(var i=0;i<cssNodes.length;++i){var cssNode=cssNodes[i];var sassNode=this._cssToSass.get(cssNode);var mappedNode=cssDiff.mapping.get(cssNode);if(mappedNode&&sassNode)
newMapping.mapCssToSass(mappedNode,sassNode);}
return newMapping;},rebaseForSASSDiff:function(sassDiff)
{var sassModels=new Map(this._sassModels);sassModels.set(sassDiff.url,sassDiff.newAST);var newMapping=new WebInspector.SASSLiveSourceMap.CSSToSASSMapping(this._cssAST,sassModels);var cssNodes=this._cssToSass.keysArray();for(var i=0;i<cssNodes.length;++i){var cssNode=cssNodes[i];var sassNode=this._cssToSass.get(cssNode);var mappedNode=sassNode.document.url===sassDiff.url?sassDiff.mapping.get(sassNode):sassNode;if(mappedNode)
newMapping.mapCssToSass(cssNode,mappedNode);}
return newMapping;},isValid:function()
{var cssNodes=this._cssToSass.keysArray();for(var i=0;i<cssNodes.length;++i){var cssNode=cssNodes[i];if(!cssNode.parent||!(cssNode.parent instanceof WebInspector.SASSSupport.Property))
continue;if(cssNode!==cssNode.parent.name)
continue;var sassNode=this._cssToSass.get(cssNode);if(sassNode&&cssNode.text.trim()!==sassNode.text.trim())
return false;}
return true;}};