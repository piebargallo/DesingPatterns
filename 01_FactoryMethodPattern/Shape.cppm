export module Shape;

// Abstract product class
// Def de una classe abstracta Shape amb una fcn virtual
// pura draw(). Aquesta classe representa el producte abstracte
// del qual han d´heretar tots els productes concrets.
export class Shape {
public:
	virtual void draw() = 0;
	virtual ~Shape() {} // Virtual destructor for polymorphism
};
