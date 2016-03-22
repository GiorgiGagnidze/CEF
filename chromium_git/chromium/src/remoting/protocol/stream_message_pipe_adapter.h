// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef REMOTING_PROTOCOL_STREAM_MESSAGE_PIPE_ADAPTER_H_
#define REMOTING_PROTOCOL_STREAM_MESSAGE_PIPE_ADAPTER_H_

#include "base/callback.h"
#include "remoting/protocol/message_pipe.h"
#include "remoting/protocol/message_reader.h"

namespace remoting {
class BufferedSocketWriter;

namespace protocol {

class P2PStreamSocket;

// MessagePipe implementation that sends and receives messages over a
// P2PStreamChannel.
class StreamMessagePipeAdapter : public MessagePipe {
 public:
  typedef base::Callback<void(int)> ErrorCallback;

  StreamMessagePipeAdapter(scoped_ptr<P2PStreamSocket> socket,
                           const ErrorCallback& error_callback);
  ~StreamMessagePipeAdapter() override;

  // MessagePipe interface.
  void StartReceiving(const MessageReceivedCallback& callback) override;
  void Send(google::protobuf::MessageLite* message,
            const base::Closure& done) override;

 private:
  void CloseOnError(int error);

  scoped_ptr<P2PStreamSocket> socket_;
  ErrorCallback error_callback_;

  MessageReader reader_;
  scoped_ptr<BufferedSocketWriter> writer_;

  DISALLOW_COPY_AND_ASSIGN(StreamMessagePipeAdapter);
};

}  // namespace protocol
}  // namespace remoting

#endif  // REMOTING_PROTOCOL_STREAM_MESSAGE_PIPE_ADAPTER_H_
