export module concreteDecoratorA;
export import decorator;

/* Los decodarodes concretos definen funcionalidades que se pueden
añadir dinámicamente a los componentes. Los decoradores concretos sobreescriben
métodos de la clase decoradora base y ejecutan su comportamiento, ya
sea antes o después de invocar al método padre.
*/
export class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* component) : Decorator(component) {
    }
    std::string Operation() const override {
        return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
    }
};