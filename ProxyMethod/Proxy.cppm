export module Proxy;

export import Subject;
import RealSubject;

import <iostream>;

/* La clase proxy tiene un campo de referencia que apunta a un objeto
de servicio. Cuando el proxy finaliza su procesamiento(por ejemplo,
inicialización diferida, registro, control de acceso, almacenamiento cache,
etc) pasa la solicitud al objeto de servicio.
Normalmente los proxies gestionan el ciclo de vida completo
de sus objetos de servicio.
*/
export class Proxy : public Subject {
    
private:
    RealSubject* real_subject_;

    bool CheckAccess() const {
        std::cout << "Proxy: Checking access prior to firing a real request.\n";
        return true;
    }
    void LogAccess() const {
        std::cout << "Proxy: Logging the time of request.\n";
    }

public:
    Proxy(RealSubject* real_subject) : real_subject_(new RealSubject(*real_subject)) {
    }

    ~Proxy() {
        delete real_subject_;
    }
    
    void Request() const override {
        if (this->CheckAccess()) {
            this->real_subject_->Request();
            this->LogAccess();
        }
    }
};