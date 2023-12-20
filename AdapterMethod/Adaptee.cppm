export module adaptee;

import <string>;

/*
Servicio es una clase útil(normalmente de una tercera parte
o heredada). El cliente no puede utilizar directa... esta clase 
porque tiene una interfaz incompatible.
*/
export class Adaptee {
public:
    std::string SpecificRequest() const {
        return ".eetpadA eht fo roivaheb laicepS";
    }
};
