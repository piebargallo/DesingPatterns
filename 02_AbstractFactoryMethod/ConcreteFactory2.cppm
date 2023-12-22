export module concreteFactory2;

export import abstractFactory;
import concreteProductA2;
import concreteProductB2;

export class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA* CreateProductA() const override {
        return new ConcreteProductA2();
    }
    AbstractProductB* CreateProductB() const override {
        return new ConcreteProductB2();
    }
};