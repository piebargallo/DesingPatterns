export module ConcreteCreator2;

export import Creator;
import ConcreteProduct2;

export class ConcreteCreator2 : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProduct2();
    }
};
