#ifndef MSGPACK_RPC_CPP_STUB_CLIENT_HPP_
#define MSGPACK_RPC_CPP_STUB_CLIENT_HPP_

#include <string>

#include "future.h"

namespace msgpack {
namespace rpc {

class client {
 public:
  client(const std::string& host, uint16_t port) {};
  void close() {};
  void set_timeout(unsigned int sec) {};

  template<typename A1>
  future call(const std::string& name, A1 a1) { return future(); };
  template<typename A1, typename A2>
  future call(const std::string& name, A1 a1, A2 a2) { return future(); };
  template<typename A1, typename A2, typename A3>
  future call(const std::string& name, A1 a1, A2 a2, A3 a3) { return future(); };
  template<typename A1, typename A2, typename A3, typename A4>
  future call(const std::string& name, A1 a1, A2 a2, A3 a3, A4 a4) { return future(); };
};

}  // namespace rpc
}  // namespace msgpack

#endif  // MSGPACK_RPC_CPP_STUB_CLIENT_HPP_
