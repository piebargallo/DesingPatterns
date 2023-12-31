export module ChicagoPizzaFactory;

export import PizzaFactory;
import ChicagoCheesePizza;
import ChicagoPepperoniPizza;

// Concrete Chicago Pizza Factory
export class ChicagoPizzaFactory : public PizzaFactory {
public:
    Pizza* createCheesePizza() override
    {
        return new ChicagoCheesePizza();
    }

    Pizza* createPepperoniPizza() override
    {
        return new ChicagoPepperoniPizza();
    }
};