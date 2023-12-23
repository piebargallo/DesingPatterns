export module Director;

import Builder;

/* La clase directora define el orden en el que se invacar�n los 
pasos de construcci�n, por lo que se puede crear y reutilizar 
configuraciones espec�ficas de los productos.
*/
export class Director {
    
private:
    Builder* builder;
   
public:

    void set_builder(Builder* builder) {
        this->builder = builder;
    }

    void BuildMinimalViableProduct() {
        this->builder->ProducePartA();
    }

    void BuildFullFeaturedProduct() {
        this->builder->ProducePartA();
        this->builder->ProducePartB();
        this->builder->ProducePartC();
    }
};