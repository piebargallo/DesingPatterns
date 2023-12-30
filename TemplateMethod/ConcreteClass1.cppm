export module ConcreteClass1;

export import AbstractClass;

import <iostream>;

/* Las clases concretas pueden sobreescribir todos los pasos,
pero no el propio método plantilla.
*/
export class ConcreteClass1 : public AbstractClass {
protected:
    void RequiredOperations1() const override {
        std::cout << "ConcreteClass1 says: Implemented Operation1\n";
    }
    void RequiredOperation2() const override {
        std::cout << "ConcreteClass1 says: Implemented Operation2\n";
    }
};