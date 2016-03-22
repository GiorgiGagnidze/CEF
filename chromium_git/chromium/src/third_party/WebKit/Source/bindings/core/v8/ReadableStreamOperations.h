// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ReadableStreamOperations_h
#define ReadableStreamOperations_h

#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptValue.h"
#include <v8.h>

namespace blink {

class ExceptionState;
class ScriptState;

// This class has various methods for ReadableStream[Reader] implemented with
// V8 Extras.
// All methods should be called in an appropriate V8 context. All ScriptValue
// arguments must not be empty.
class CORE_EXPORT ReadableStreamOperations {
    STATIC_ONLY(ReadableStreamOperations);
public:
    // AcquireReadableStreamReader
    // This function assumes |isReadableStream(stream)|.
    // Returns an empty value and throws an error via the ExceptionState when
    // errored.
    static ScriptValue getReader(ScriptState*, ScriptValue stream, ExceptionState&);

    // IsReadableStream
    static bool isReadableStream(ScriptState*, ScriptValue);

    // IsReadableStreamDisturbed
    // This function assumes |isReadableStream(stream)|.
    static bool isDisturbed(ScriptState*, ScriptValue stream);

    // IsReadableStreamLocked
    // This function assumes |isReadableStream(stream)|.
    static bool isLocked(ScriptState*, ScriptValue stream);

    // IsReadableStreamReader
    static bool isReadableStreamReader(ScriptState*, ScriptValue);

    // ReadFromReadableStreamReader
    // This function assumes |isReadableStreamReader(reader)|.
    static ScriptPromise read(ScriptState*, ScriptValue reader);
};

} // namespace blink

#endif // ReadableStreamOperations_h
