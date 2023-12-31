export module SquareFactory;

export import ShapeFactory;
import Square;

// Concrete creator class - SquareFactory
export class SquareFactory : public ShapeFactory {
public:
    Shape* createShape() override {
        return new Square();
    }
};