/* La clase prototipo concreto implementa el método de clonación.
Además de copiar la información del objeto original al clon, este
método también puede gestionar algunos casos extremos del proceso
de clonación, como, por ejemplo, clonar objetos vínculados,
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

