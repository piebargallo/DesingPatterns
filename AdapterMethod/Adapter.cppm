export module adapter;

import adaptee;
export import target;

/*
La clase adaptadora es capaz de trabajar tanto con la clase cliente
como con la clase de servicio:implementa la interfaz con el cliente,
mientras envuelve el objeto de la clase servicio. la clase adaptadora
recibe llamadas del cliente a través de la interfaz de cliente y las 
traduce en llamadas al objeto envuelto de la clase de servicio, pero
en un formato que pueda comprender.
*/
export class Adapter : public Target {
private:
    Adaptee* adaptee_;

public:
    Adapter(Adaptee* adaptee) : adaptee_(adaptee) {}
    std::string Request() const override {
        std::string to_reverse = this->adaptee_->SpecificRequest();
        std::reverse(to_reverse.begin(), to_reverse.end());
        return "Adapter: (TRANSLATED) " + to_reverse;
    }
};