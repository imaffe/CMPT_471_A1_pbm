#include "server_handler.hpp"

int main(int argc, char** argv) {
    model::SetManager sm;
    net::Server* s = new net::Server((void*)&sm);
    s->onConnect(net::OnNewClientConnected);
    s->init();
    s->loop();
}