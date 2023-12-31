export module NewYorkPepperoniPizza;

export import Pizza;

import <iostream>;

// Concrete New York Pepperoni Pizza
export class NewYorkPepperoniPizza : public Pizza {
public:
    void bake() override
    {
        std::cout
            << "Baking New York-style pepperoni pizza."
            << std::endl;
    }

    void cut() override
    {
        std::cout
            << "Cutting New York-style pepperoni pizza."
            << std::endl;
    }

    void box() override
    {
        std::cout
            << "Boxing New York-style pepperoni pizza."
            << std::endl;
    }
};