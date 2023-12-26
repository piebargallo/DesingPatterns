export module SquirrelHandler;

export import AbstractHandler;

export class SquirrelHandler : public AbstractHandler {
public:
    std::string Handle(std::string request) override {
        if (request == "Nut") {
            return "Squirrel: I'll eat the " + request + ".\n";
        }
        else {
            return AbstractHandler::Handle(request);
        }
    }
};