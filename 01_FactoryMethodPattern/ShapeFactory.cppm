export module ShapeFactory;

import Shape;

// Abstract creator class
// La clase del creador abstracte, ShapeFactory, declara una fcn virtual
// pura createShape(), que els creadors concrets implementaran per 
// crear formes específiques.
export class ShapeFactory {
public:
	virtual Shape* createShape() = 0;
	virtual ~ShapeFactory() {} // Virtual destructor for polymorphism
};
