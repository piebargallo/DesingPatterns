export module CircleFactory;

export import ShapeFactory;
import Circle;

// Concrete creator class - CircleFactory
export class CircleFactory : public ShapeFactory {
public:
    Shape* createShape() override {
        return new Circle();
    }
};