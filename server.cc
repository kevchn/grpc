#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>

#include "key_exchange.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using keyexchange::KeyExchange;
using keyexchange::KeyRequest;
using keyexchange::KeyReply;

class KeyExchangeServiceImpl final : public KeyExchange::Service {
    Status get_key(ServerContext* context, const KeyRequest* request, KeyReply* reply) override {
	std::string prefix("imaginary key for ");
	reply->set_key(prefix + request->name());
	return Status::OK;
    }
};

void RunServer() {
    ServerBuilder bdr;

    std::string server_address("0.0.0.0:50051");
    bdr.AddListeningPort(server_address, grpc::InsecureServerCredentials());

    KeyExchangeServiceImpl service;
    bdr.RegisterService(&service);

    std::unique_ptr<Server> server(bdr.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;

    server->Wait();
}

int main(int argc, char** argv) {
    RunServer();

    return 0;
}
