export module facade;

import subsystem1;
import subsystem2;
import <string>;

/* El patr�n facade proporciona un pr�ctico acceso a una 
parte espec�fica de la funcionalidad del susbsistema. 
Sabe a d�nde dirigir la petici�n del cliente y c�mo operar
todas las partes m�viles. */
export class Facade {
protected:
    Subsystem1* subsystem1_;
    Subsystem2* subsystem2_;
    
public:
    
    Facade(
        Subsystem1* subsystem1 = nullptr,
        Subsystem2* subsystem2 = nullptr) {
        this->subsystem1_ = subsystem1  = new Subsystem1;
        this->subsystem2_ = subsystem2  = new Subsystem2;
    }
    ~Facade() {
        delete subsystem1_;
        delete subsystem2_;
    }
    
    std::string Operation() {
        std::string result = "Facade initializes subsystems:\n";
        result += this->subsystem1_->Operation1();
        result += this->subsystem2_->Operation1();
        result += "Facade orders subsystems to perform the action:\n";
        result += this->subsystem1_->OperationN();
        result += this->subsystem2_->OperationZ();
        return result;
    }
};
