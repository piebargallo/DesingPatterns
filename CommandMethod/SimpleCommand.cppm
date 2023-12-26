export module SimpleCommand;

export import Command;

import <iostream>;
import <string>;

/* Los comandos concretos implementan varios tipos de solicitudes
Un comando concreto no se supone que tenga que realizar el trabajo
por su cuenta, sino pasar la llamada a uno de los objetos de la
lógica de negocio. 
*/
export class SimpleCommand : public Command {
private:
    std::string pay_load_;

public:
    explicit SimpleCommand(std::string pay_load) : pay_load_(pay_load) {
    }
    void Execute() const override {
        std::cout << "SimpleCommand: See, I can do simple things like printing (" << this->pay_load_ << ")\n";
    }
};