export module leaf;
export import component;

/* La hoja es el elemento b�sico de un �rbol que no tiene
subelementos.
*/
 export class Leaf : public Component {
public:
    std::string Operation() const override {
        return "Leaf";
    }
};