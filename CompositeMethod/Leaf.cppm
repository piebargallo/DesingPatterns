export module leaf;
export import component;

/* La hoja es el elemento básico de un árbol que no tiene
subelementos.
*/
 export class Leaf : public Component {
public:
    std::string Operation() const override {
        return "Leaf";
    }
};