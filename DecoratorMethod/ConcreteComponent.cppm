export module concreteComponent;
export import component;

/* El componente concreto es una clase de objetos envueltos.
Define el comportamiento b�sico que los decoradores pueden alterar.
*/
export class ConcreteComponent : public Component {
public:
    std::string Operation() const override {
        return "ConcreteComponent";
    }
};