export module NewYorkCheesePizza;

export import Pizza;

import <iostream>;

// Concrete New York Cheese Pizza
export class NewYorkCheesePizza : public Pizza {
public:
    void bake() override
    {
        std::cout << "Baking New York-style cheese pizza."
            << std::endl;
    }

    void cut() override
    {
        std::cout << "Cutting New York-style cheese pizza."
            << std::endl;
    }

    void box() override
    {
        std::cout << "Boxing New York-style cheese pizza."
            << std::endl;
    }
};