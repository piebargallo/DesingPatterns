export module concreteFactory1;

export import abstractFactory;
import concreteProductA1;
import concreteProductB1;

export class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA* CreateProductA() const override {
        return new ConcreteProductA1();
    }
    AbstractProductB* CreateProductB() const override {
        return new ConcreteProductB1();
    }
};