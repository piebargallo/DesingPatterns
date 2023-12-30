export module AbstractClass;

import <iostream>;

/* La clase abstracta declara m�todos que act�an como pasos
de un algoritmo, as� como el propio m�todo plantilla que invoca
estos m�todos en un orden espec�fico. Los pasos pueden declararse
abstractos o contar con una implementaci�n por defecto.
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