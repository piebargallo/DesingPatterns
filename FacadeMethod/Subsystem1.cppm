export module subsystem1;

import <string>;

/* El susbsistema complejo consiste en decenas de objetos diversos.
Para lograr que todos hagan algo significativo, debes profundizar 
en los detalles de implementación del subsistema, que pueden incluir
inicializar objetos en el orden correcto y suministrales datos
en el formato adecuado.
*/
export class Subsystem1 {
public:
    std::string Operation1() const {
        return "Subsystem1: Ready!\n";
    }
    // ...
    std::string OperationN() const {
        return "Subsystem1: Go!\n";
    }
};