#ifndef MSGPACK_RPC_CPP_STUB_FUTURE_HPP_
#define MSGPACK_RPC_CPP_STUB_FUTURE_HPP_

#include <string>

namespace msgpack {
namespace rpc {

class future {
 public:
   template <typename T> T get() { return T(); };
};

}  // namespace rpc
}  // namespace msgpack

#endif  // MSGPACK_RPC_CPP_STUB_FUTURE_HPP_
