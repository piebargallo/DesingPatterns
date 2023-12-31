export module NewYorkPizzaFactory;

export import PizzaFactory;
import NewYorkCheesePizza;
import NewYorkPepperoniPizza;

// Concrete New York Pizza Factory
export class NewYorkPizzaFactory : public PizzaFactory {
public:
    Pizza* createCheesePizza() override
    {
        return new NewYorkCheesePizza();
    }

    Pizza* createPepperoniPizza() override
    {
        return new NewYorkPepperoniPizza();
    }
};