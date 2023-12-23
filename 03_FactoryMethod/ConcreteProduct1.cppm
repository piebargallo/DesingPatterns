export module ConcreteProduct1;

export import Product;

/* Los productos concretos son distintas implementaciones 
de la interfaz de producto.
*/
export class ConcreteProduct1 : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProduct1}";
    }
};