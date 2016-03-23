// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("extensions/common/mojo/keep_alive.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {


  function KeepAliveProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  KeepAliveProxy.prototype = Object.create(bindings.ProxyBase.prototype);

  function KeepAliveStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  KeepAliveStub.prototype = Object.create(bindings.StubBase.prototype);

  KeepAliveStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  KeepAliveStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateKeepAliveRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateKeepAliveResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var KeepAlive = {
    name: 'extensions::KeepAlive',
    proxyClass: KeepAliveProxy,
    stubClass: KeepAliveStub,
    validateRequest: validateKeepAliveRequest,
    validateResponse: null,
  };
  KeepAliveStub.prototype.validator = validateKeepAliveRequest;
  KeepAliveProxy.prototype.validator = null;

  var exports = {};
  exports.KeepAlive = KeepAlive;

  return exports;
});