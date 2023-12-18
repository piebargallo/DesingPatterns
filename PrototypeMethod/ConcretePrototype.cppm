/* La clase prototipo concreto implementa el m�todo de clonaci�n.
Adem�s de copiar la informaci�n del objeto original al clon, este
m�todo tambi�n puede gestionar algunos casos extremos del proceso
de clonaci�n, como, por ejemplo, clonar objetos v�nculados,
deshacer dependencias recursivas, etc. */

export module concretePrototype;

export import prototype;

import <iostream>;
import <string>;

export class ConcretePrototype : public Prototype {
public:
    ConcretePrototype(const std::string& name, int age) : name_(name), age_(age) {}

    Prototype* clone() const override {
        return new ConcretePrototype(*this);
    }

    void Print() const override {
       std::cout << "Name: " << name_ << ", Age: " << age_ << std::endl;
    }

private:
    std::string name_;
    int age_;
};

