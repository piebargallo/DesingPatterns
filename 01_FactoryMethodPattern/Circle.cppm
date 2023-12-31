export module Circle;

export import Shape;

import <iostream>;

// Concrete product class - Circle
export class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a Circle" << std::endl;
    }
};