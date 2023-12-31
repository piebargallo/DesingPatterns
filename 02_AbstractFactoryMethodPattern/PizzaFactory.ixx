export module PizzaFactory;

import Pizza;

// Abstract Factory Interface
export class PizzaFactory {
public:
    virtual Pizza* createCheesePizza() = 0;
    virtual Pizza* createPepperoniPizza() = 0;
};