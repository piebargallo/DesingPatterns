import CircleFactory;
import SquareFactory;

int main() {
	ShapeFactory* circleFactory = new CircleFactory();
	ShapeFactory* squareFactory = new SquareFactory();

	Shape* circle = circleFactory->createShape();
	Shape* square = squareFactory->createShape();

	circle->draw(); // Output: Drawing a Circle
	square->draw(); // Output: Drawing a Square

	delete circleFactory;
	delete squareFactory;
	delete circle;
	delete square;

	return 0;
}
