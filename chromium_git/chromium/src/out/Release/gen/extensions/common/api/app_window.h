// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/app_window.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_APP_WINDOW_H__
#define EXTENSIONS_COMMON_API_APP_WINDOW_H__

#include <stdint.h>

#include <map>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/memory/linked_ptr.h"
#include "base/memory/scoped_ptr.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace app_window {

//
// Types
//

struct ContentBounds {
  ContentBounds();
  ~ContentBounds();

  // Populates a ContentBounds object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ContentBounds* out);

  // Creates a ContentBounds object from a base::Value, or NULL on failure.
  static scoped_ptr<ContentBounds> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ContentBounds object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<int> left;

  scoped_ptr<int> top;

  scoped_ptr<int> width;

  scoped_ptr<int> height;


 private:
  DISALLOW_COPY_AND_ASSIGN(ContentBounds);
};

struct BoundsSpecification {
  BoundsSpecification();
  ~BoundsSpecification();

  // Populates a BoundsSpecification object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, BoundsSpecification* out);

  // Creates a BoundsSpecification object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<BoundsSpecification> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this BoundsSpecification object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The X coordinate of the content or window.
  scoped_ptr<int> left;

  // The Y coordinate of the content or window.
  scoped_ptr<int> top;

  // The width of the content or window.
  scoped_ptr<int> width;

  // The height of the content or window.
  scoped_ptr<int> height;

  // The minimum width of the content or window.
  scoped_ptr<int> min_width;

  // The minimum height of the content or window.
  scoped_ptr<int> min_height;

  // The maximum width of the content or window.
  scoped_ptr<int> max_width;

  // The maximum height of the content or window.
  scoped_ptr<int> max_height;


 private:
  DISALLOW_COPY_AND_ASSIGN(BoundsSpecification);
};

struct Bounds {
  Bounds();
  ~Bounds();

  // Populates a Bounds object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Bounds* out);

  // Creates a Bounds object from a base::Value, or NULL on failure.
  static scoped_ptr<Bounds> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Bounds object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // This property can be used to read or write the current X coordinate of the
  // content or window.
  int left;

  // This property can be used to read or write the current Y coordinate of the
  // content or window.
  int top;

  // This property can be used to read or write the current width of the content
  // or window.
  int width;

  // This property can be used to read or write the current height of the content
  // or window.
  int height;

  // This property can be used to read or write the current minimum width of the
  // content or window. A value of <code>null</code> indicates 'unspecified'.
  scoped_ptr<int> min_width;

  // This property can be used to read or write the current minimum height of the
  // content or window. A value of <code>null</code> indicates 'unspecified'.
  scoped_ptr<int> min_height;

  // This property can be used to read or write the current maximum width of the
  // content or window. A value of <code>null</code> indicates 'unspecified'.
  scoped_ptr<int> max_width;

  // This property can be used to read or write the current maximum height of the
  // content or window. A value of <code>null</code> indicates 'unspecified'.
  scoped_ptr<int> max_height;

  // Set the left and top position of the content or window.
  base::DictionaryValue set_position;

  // Set the width and height of the content or window.
  base::DictionaryValue set_size;

  // Set the minimum size constraints of the content or window. The minimum width
  // or height can be set to <code>null</code> to remove the constraint. A value
  // of <code>undefined</code> will leave a constraint unchanged.
  base::DictionaryValue set_minimum_size;

  // Set the maximum size constraints of the content or window. The maximum width
  // or height can be set to <code>null</code> to remove the constraint. A value
  // of <code>undefined</code> will leave a constraint unchanged.
  base::DictionaryValue set_maximum_size;


 private:
  DISALLOW_COPY_AND_ASSIGN(Bounds);
};

struct FrameOptions {
  FrameOptions();
  ~FrameOptions();

  // Populates a FrameOptions object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, FrameOptions* out);

  // Creates a FrameOptions object from a base::Value, or NULL on failure.
  static scoped_ptr<FrameOptions> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this FrameOptions object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // <p>Frame type: <code>none</code> or <code>chrome</code> (defaults to
  // <code>chrome</code>).</p><p>For <code>none</code>, the
  // <code>-webkit-app-region</code> CSS property can be used to apply
  // draggability to the app's window.</p><p><code>-webkit-app-region: drag</code>
  // can be used to mark regions draggable. <code>no-drag</code> can be used to
  // disable this style on nested elements.</p>
  scoped_ptr<std::string> type;

  // <p>Allows the frame color to be set. Frame coloring is only available if the
  // frame type is <code>chrome</code>.</p><p>Frame coloring is new in Chrome
  // 36.</p>
  scoped_ptr<std::string> color;

  // <p>Allows the frame color of the window when active to be set. Frame coloring
  // is only available if the frame type is <code>chrome</code>.</p><p>Frame
  // coloring is only available if the frame type is
  // <code>chrome</code>.</p><p>Frame coloring is new in Chrome 36.</p>
  scoped_ptr<std::string> active_color;

  // <p>Allows the frame color of the window when inactive to be set differently
  // to the active color. Frame coloring is only available if the frame type is
  // <code>chrome</code>.</p><p><code>inactiveColor</code> must be used in
  // conjunction with <code> color</code>.</p><p>Frame coloring is new in Chrome
  // 36.</p>
  scoped_ptr<std::string> inactive_color;


 private:
  DISALLOW_COPY_AND_ASSIGN(FrameOptions);
};

// State of a window: normal, fullscreen, maximized, minimized.
enum State {
  STATE_NONE,
  STATE_NORMAL,
  STATE_FULLSCREEN,
  STATE_MAXIMIZED,
  STATE_MINIMIZED,
  STATE_LAST = STATE_MINIMIZED,
};


std::string ToString(State as_enum);
State ParseState(const std::string& as_string);

// Specifies the type of window to create.
enum WindowType {
  WINDOW_TYPE_NONE,
  WINDOW_TYPE_SHELL,
  WINDOW_TYPE_PANEL,
  WINDOW_TYPE_LAST = WINDOW_TYPE_PANEL,
};


std::string ToString(WindowType as_enum);
WindowType ParseWindowType(const std::string& as_string);

struct CreateWindowOptions {
  CreateWindowOptions();
  ~CreateWindowOptions();

  // Populates a CreateWindowOptions object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, CreateWindowOptions* out);

  // Creates a CreateWindowOptions object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<CreateWindowOptions> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this CreateWindowOptions object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // <p>Frame type: <code>none</code> or <code>chrome</code> (defaults to
  // <code>chrome</code>). For <code>none</code>, the
  // <code>-webkit-app-region</code> CSS property can be used to apply
  // draggability to the app's window. <code>-webkit-app-region: drag</code> can
  // be used to mark regions draggable. <code>no-drag</code> can be used to
  // disable this style on nested elements.</p><p>Use of <code>FrameOptions</code>
  // is new in M36.</p>
  struct Frame {
    Frame();
    ~Frame();

    // Populates a Frame object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, Frame* out);

    // Returns a new base::Value representing the serialized form of this Frame
    // object.
    scoped_ptr<base::Value> ToValue() const;
    // Choices:
    scoped_ptr<std::string> as_string;
    scoped_ptr<FrameOptions> as_frame_options;

   private:
    DISALLOW_COPY_AND_ASSIGN(Frame);
  };


  // Id to identify the window. This will be used to remember the size and
  // position of the window and restore that geometry when a window with the same
  // id is later opened. If a window with a given id is created while another
  // window with the same id already exists, the currently opened window will be
  // focused instead of creating a new window.
  scoped_ptr<std::string> id;

  // <p>Used to specify the initial position, initial size and constraints of the
  // window's content (excluding window decorations). If an <code>id</code> is
  // also specified and a window with a matching <code>id</code> has been shown
  // before, the remembered bounds will be used instead.</p><p>Note that the
  // padding between the inner and outer bounds is determined by the OS. Therefore
  // setting the same bounds property for both the <code>innerBounds</code> and
  // <code>outerBounds</code> will result in an error.</p><p>This property is new
  // in Chrome 36.</p>
  scoped_ptr<BoundsSpecification> inner_bounds;

  // <p>Used to specify the initial position, initial size and constraints of the
  // window (including window decorations such as the title bar and frame). If an
  // <code>id</code> is also specified and a window with a matching
  // <code>id</code> has been shown before, the remembered bounds will be used
  // instead.</p><p>Note that the padding between the inner and outer bounds is
  // determined by the OS. Therefore setting the same bounds property for both the
  // <code>innerBounds</code> and <code>outerBounds</code> will result in an
  // error.</p><p>This property is new in Chrome 36.</p>
  scoped_ptr<BoundsSpecification> outer_bounds;

  // Default width of the window.
  scoped_ptr<int> default_width;

  // Default height of the window.
  scoped_ptr<int> default_height;

  // Default X coordinate of the window.
  scoped_ptr<int> default_left;

  // Default Y coordinate of the window.
  scoped_ptr<int> default_top;

  // Width of the window.
  scoped_ptr<int> width;

  // Height of the window.
  scoped_ptr<int> height;

  // X coordinate of the window.
  scoped_ptr<int> left;

  // Y coordinate of the window.
  scoped_ptr<int> top;

  // Minimum width of the window.
  scoped_ptr<int> min_width;

  // Minimum height of the window.
  scoped_ptr<int> min_height;

  // Maximum width of the window.
  scoped_ptr<int> max_width;

  // Maximum height of the window.
  scoped_ptr<int> max_height;

  // Type of window to create.
  WindowType type;

  // Creates a special ime window. This window is not focusable and can be stacked
  // above virtual keyboard window. This is restriced to component ime extensions.
  // Requires the <code>app.window.ime</code> API permission.
  scoped_ptr<bool> ime;

  // <p>Frame type: <code>none</code> or <code>chrome</code> (defaults to
  // <code>chrome</code>). For <code>none</code>, the
  // <code>-webkit-app-region</code> CSS property can be used to apply
  // draggability to the app's window. <code>-webkit-app-region: drag</code> can
  // be used to mark regions draggable. <code>no-drag</code> can be used to
  // disable this style on nested elements.</p><p>Use of <code>FrameOptions</code>
  // is new in M36.</p>
  scoped_ptr<Frame> frame;

  // Size and position of the content in the window (excluding the titlebar). If
  // an id is also specified and a window with a matching id has been shown
  // before, the remembered bounds of the window will be used instead.
  scoped_ptr<ContentBounds> bounds;

  // Enable window background transparency. Only supported in ash. Requires the
  // <code>app.window.alpha</code> API permission.
  scoped_ptr<bool> alpha_enabled;

  // The initial state of the window, allowing it to be created already
  // fullscreen, maximized, or minimized. Defaults to 'normal'.
  State state;

  // If true, the window will be created in a hidden state. Call show() on the
  // window to show it once it has been created. Defaults to false.
  scoped_ptr<bool> hidden;

  // If true, the window will be resizable by the user. Defaults to true.
  scoped_ptr<bool> resizable;

  // By default if you specify an id for the window, the window will only be
  // created if another window with the same id doesn't already exist. If a window
  // with the same id already exists that window is activated instead. If you do
  // want to create multiple windows with the same id, you can set this property
  // to false.
  scoped_ptr<bool> singleton;

  // <p>If true, the window will stay above most other windows. If there are
  // multiple windows of this kind, the currently focused window will be in the
  // foreground. Requires the <code>alwaysOnTopWindows</code> permission. Defaults
  // to false.</p><p>Call <code>setAlwaysOnTop()</code> on the window to change
  // this property after creation.</p>
  scoped_ptr<bool> always_on_top;

  // If true, the window will be focused when created. Defaults to true.
  scoped_ptr<bool> focused;

  // If true, and supported by the platform, the window will be visible on all
  // workspaces.
  scoped_ptr<bool> visible_on_all_workspaces;


 private:
  DISALLOW_COPY_AND_ASSIGN(CreateWindowOptions);
};

struct AppWindow {
  AppWindow();
  ~AppWindow();

  // Populates a AppWindow object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, AppWindow* out);

  // Creates a AppWindow object from a base::Value, or NULL on failure.
  static scoped_ptr<AppWindow> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this AppWindow object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The JavaScript 'window' object for the created child.
  struct ContentWindow {
    ContentWindow();
    ~ContentWindow();

    // Populates a ContentWindow object from a base::Value. Returns whether |out|
    // was successfully populated.
    static bool Populate(const base::Value& value, ContentWindow* out);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this ContentWindow object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    base::DictionaryValue additional_properties;

   private:
    DISALLOW_COPY_AND_ASSIGN(ContentWindow);
  };


  // Focus the window.
  base::DictionaryValue focus;

  // <p>Fullscreens the window.</p><p>The user will be able to restore the window
  // by pressing ESC. An application can prevent the fullscreen state to be left
  // when ESC is pressed by requesting the
  // <code>app.window.fullscreen.overrideEsc</code> permission and canceling the
  // event by calling .preventDefault(), in the keydown and keyup handlers, like
  // this:</p><p><code>window.onkeydown = window.onkeyup = function(e) { if
  // (e.keyCode == 27 /* ESC */) { e.preventDefault(); } };</code></p><p>Note
  // <code>window.fullscreen()</code> will cause the entire window to become
  // fullscreen and does not require a user gesture. The HTML5 fullscreen API can
  // also be used to enter fullscreen mode (see <a
  // href="http://developer.chrome.com/apps/api_other.html">Web APIs</a> for more
  // details).</p>
  base::DictionaryValue fullscreen;

  // Is the window fullscreen? This will be true if the window has been created
  // fullscreen or was made fullscreen via the <code>AppWindow</code> or HTML5
  // fullscreen APIs.
  base::DictionaryValue is_fullscreen;

  // Minimize the window.
  base::DictionaryValue minimize;

  // Is the window minimized?
  base::DictionaryValue is_minimized;

  // Maximize the window.
  base::DictionaryValue maximize;

  // Is the window maximized?
  base::DictionaryValue is_maximized;

  // Restore the window, exiting a maximized, minimized, or fullscreen state.
  base::DictionaryValue restore;

  // Move the window to the position (|left|, |top|).
  base::DictionaryValue move_to;

  // Resize the window to |width|x|height| pixels in size.
  base::DictionaryValue resize_to;

  // Draw attention to the window.
  base::DictionaryValue draw_attention;

  // Clear attention to the window.
  base::DictionaryValue clear_attention;

  // Close the window.
  base::DictionaryValue close;

  // Show the window. Does nothing if the window is already visible. Focus the
  // window if |focused| is set to true or omitted.
  base::DictionaryValue show;

  // Hide the window. Does nothing if the window is already hidden.
  base::DictionaryValue hide;

  // Set the app icon for the window (experimental). Currently this is only being
  // implemented on Ash. TODO(stevenjb): Investigate implementing this on Windows
  // and OSX.
  base::DictionaryValue set_icon;

  // Is the window always on top?
  base::DictionaryValue is_always_on_top;

  // Accessors for testing.
  bool has_frame_color;

  int active_frame_color;

  int inactive_frame_color;

  scoped_ptr<bool> first_show_has_happened;

  // Set whether the window should stay above most other windows. Requires the
  // <code>alwaysOnTopWindows</code> permission.
  base::DictionaryValue set_always_on_top;

  // Can the window use alpha transparency? TODO(jackhou): Document this properly
  // before going to stable.
  base::DictionaryValue alpha_enabled;

  // Set whether the window is visible on all workspaces. (Only for platforms that
  // support this).
  base::DictionaryValue set_visible_on_all_workspaces;

  // The JavaScript 'window' object for the created child.
  ContentWindow content_window;

  // The id the window was created with.
  std::string id;

  // The position, size and constraints of the window's content, which does not
  // include window decorations. This property is new in Chrome 36.
  Bounds inner_bounds;

  // The position, size and constraints of the window, which includes window
  // decorations, such as the title bar and frame. This property is new in Chrome
  // 36.
  Bounds outer_bounds;


 private:
  DISALLOW_COPY_AND_ASSIGN(AppWindow);
};


//
// Functions
//

namespace Create {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string url;

  scoped_ptr<CreateWindowOptions> options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

struct CreatedWindow {
  CreatedWindow();
  ~CreatedWindow();

  // Returns a new base::DictionaryValue representing the serialized form of
  // this CreatedWindow object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  base::DictionaryValue additional_properties;

 private:
  DISALLOW_COPY_AND_ASSIGN(CreatedWindow);
};


scoped_ptr<base::ListValue> Create(const CreatedWindow& created_window);
}  // namespace Results

}  // namespace Create

}  // namespace app_window
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_APP_WINDOW_H__
