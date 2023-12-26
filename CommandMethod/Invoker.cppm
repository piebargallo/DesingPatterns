export module Invoker;

import Command;

import <iostream>;

/* La clase emisora o invocadora es la responsable de inicializar las 
solicitudes. Esta clase debe tener un campo para almacenar una referencia
a un objeto de comando. El emisor activa este comando en lugar de enviar 
la solicitud directamente al receptor. 
*/
export class Invoker {
    
private:
    Command* on_start_;
    
    Command* on_finish_;
   
public:
    ~Invoker() {
        delete on_start_;
        delete on_finish_;
    }

    void SetOnStart(Command* command) {
        this->on_start_ = command;
    }
    void SetOnFinish(Command* command) {
        this->on_finish_ = command;
    }
    
    void DoSomethingImportant() {
        std::cout << "Invoker: Does anybody want something done before I begin?\n";
        if (this->on_start_) {
            this->on_start_->Execute();
        }
        std::cout << "Invoker: ...doing something really important...\n";
        std::cout << "Invoker: Does anybody want something done after I finish?\n";
        if (this->on_finish_) {
            this->on_finish_->Execute();
        }
    }
};