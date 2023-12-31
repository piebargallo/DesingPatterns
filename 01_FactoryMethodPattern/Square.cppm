export module Square;

export import Shape;

import <iostream>;

// Concrete product class - Square
export class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a Square" << std::endl;
    }
};