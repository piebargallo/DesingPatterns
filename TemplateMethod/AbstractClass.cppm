export module AbstractClass;

import <iostream>;

/* La clase abstracta declara métodos que actúan como pasos
de un algoritmo, así como el propio método plantilla que invoca
estos métodos en un orden específico. Los pasos pueden declararse
abstractos o contar con una implementación por defecto.
*/
export class AbstractClass {
    
public:
    void TemplateMethod() const {
        this->BaseOperation1();
        this->RequiredOperations1();
        this->BaseOperation2();
        this->Hook1();
        this->RequiredOperation2();
        this->BaseOperation3();
        this->Hook2();
    }
    
protected:
    void BaseOperation1() const {
        std::cout << "AbstractClass says: I am doing the bulk of the work\n";
    }
    void BaseOperation2() const {
        std::cout << "AbstractClass says: But I let subclasses override some operations\n";
    }
    void BaseOperation3() const {
        std::cout << "AbstractClass says: But I am doing the bulk of the work anyway\n";
    }
    
    virtual void RequiredOperations1() const = 0;
    virtual void RequiredOperation2() const = 0;
    
    virtual void Hook1() const {}
    virtual void Hook2() const {}
};