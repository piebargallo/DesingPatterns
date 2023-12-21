export module concreteDecoratorA;
export import decorator;

/* Los decodarodes concretos definen funcionalidades que se pueden
a�adir din�micamente a los componentes. Los decoradores concretos sobreescriben
m�todos de la clase decoradora base y ejecutan su comportamiento, ya
sea antes o despu�s de invocar al m�todo padre.
*/
export class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* component) : Decorator(component) {
    }
    std::string Operation() const override {
        return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
    }
};