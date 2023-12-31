export module ChicagoPepperoniPizza;

export import Pizza;

import <iostream>;

// Concrete Chicago Pepperoni Pizza
export class ChicagoPepperoniPizza : public Pizza {
public:
    void bake() override
    {
        std::cout << "Baking Chicago-style pepperoni pizza."
            << std::endl;
    }

    void cut() override
    {
        std::cout
            << "Cutting Chicago-style pepperoni pizza."
            << std::endl;
    }

    void box() override
    {
        std::cout << "Boxing Chicago-style pepperoni pizza."
            << std::endl;
    }
};