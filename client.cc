#include "key_exchange.grpc.pb.h"

#include <grpcpp/grpcpp.h>
#include <iostream>
#include <memory>
#include <string>

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using keyexchange::KeyExchange;
using keyexchange::KeyRequest;
using keyexchange::KeyReply;

class Client {
    public:
	Client(std::shared_ptr<Channel> channel): stub_(KeyExchange::NewStub(channel)) {}

    std::string get_key(const std::string& user) {
	KeyRequest request;
	request.set_name(user);

	KeyReply reply;
	
	ClientContext context;

	Status status = stub_->get_key(&context, request, &reply);

	if (status.ok()) {
	    return reply.key();
	} else {
	    std::cout << status.error_code() << ": " << status.error_message()
                      << std::endl;
	    return "RPC failed";
	}
    }

    private:
	std::unique_ptr<KeyExchange::Stub> stub_;
};

int main(int argc, char**arv) {
    Client client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
    std::string person("kevin");
    std::string reply = client.get_key(person);
    std::cout << "Client received " << reply << std::endl;
}
