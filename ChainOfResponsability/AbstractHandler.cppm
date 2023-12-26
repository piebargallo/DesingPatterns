export module AbstractHandler;

export import Handler;

/* La clase base  es opcional y es donde se puede colocar
el código boilerplate común para todas las clases manejadoras.
*/
export class AbstractHandler : public Handler {
    
private:
    Handler* next_handler_;

public:
    AbstractHandler() : next_handler_(nullptr) {
    }
    Handler* SetNext(Handler* handler) override {
        this->next_handler_ = handler;
        return handler;
    }
    std::string Handle(std::string request) override {
        if (this->next_handler_) {
            return this->next_handler_->Handle(request);
        }

        return {};
    }
};