// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: key_exchange.proto
#ifndef GRPC_key_5fexchange_2eproto__INCLUDED
#define GRPC_key_5fexchange_2eproto__INCLUDED

#include "key_exchange.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace keyexchange {

class KeyExchange final {
 public:
  static constexpr char const* service_full_name() {
    return "keyexchange.KeyExchange";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status get_key(::grpc::ClientContext* context, const ::keyexchange::KeyRequest& request, ::keyexchange::KeyReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::keyexchange::KeyReply>> Asyncget_key(::grpc::ClientContext* context, const ::keyexchange::KeyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::keyexchange::KeyReply>>(Asyncget_keyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::keyexchange::KeyReply>> PrepareAsyncget_key(::grpc::ClientContext* context, const ::keyexchange::KeyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::keyexchange::KeyReply>>(PrepareAsyncget_keyRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::keyexchange::KeyReply>* Asyncget_keyRaw(::grpc::ClientContext* context, const ::keyexchange::KeyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::keyexchange::KeyReply>* PrepareAsyncget_keyRaw(::grpc::ClientContext* context, const ::keyexchange::KeyRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status get_key(::grpc::ClientContext* context, const ::keyexchange::KeyRequest& request, ::keyexchange::KeyReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::keyexchange::KeyReply>> Asyncget_key(::grpc::ClientContext* context, const ::keyexchange::KeyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::keyexchange::KeyReply>>(Asyncget_keyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::keyexchange::KeyReply>> PrepareAsyncget_key(::grpc::ClientContext* context, const ::keyexchange::KeyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::keyexchange::KeyReply>>(PrepareAsyncget_keyRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::keyexchange::KeyReply>* Asyncget_keyRaw(::grpc::ClientContext* context, const ::keyexchange::KeyRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::keyexchange::KeyReply>* PrepareAsyncget_keyRaw(::grpc::ClientContext* context, const ::keyexchange::KeyRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_get_key_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status get_key(::grpc::ServerContext* context, const ::keyexchange::KeyRequest* request, ::keyexchange::KeyReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_get_key : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_get_key() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_get_key() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get_key(::grpc::ServerContext* context, const ::keyexchange::KeyRequest* request, ::keyexchange::KeyReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestget_key(::grpc::ServerContext* context, ::keyexchange::KeyRequest* request, ::grpc::ServerAsyncResponseWriter< ::keyexchange::KeyReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_get_key<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_get_key : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_get_key() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_get_key() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get_key(::grpc::ServerContext* context, const ::keyexchange::KeyRequest* request, ::keyexchange::KeyReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_get_key : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_get_key() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::keyexchange::KeyRequest, ::keyexchange::KeyReply>(std::bind(&WithStreamedUnaryMethod_get_key<BaseClass>::Streamedget_key, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_get_key() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status get_key(::grpc::ServerContext* context, const ::keyexchange::KeyRequest* request, ::keyexchange::KeyReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedget_key(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::keyexchange::KeyRequest,::keyexchange::KeyReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_get_key<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_get_key<Service > StreamedService;
};

}  // namespace keyexchange


#endif  // GRPC_key_5fexchange_2eproto__INCLUDED
