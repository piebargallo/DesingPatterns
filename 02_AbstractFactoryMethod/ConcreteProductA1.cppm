export module concreteProductA1;
export import abstractProductA;

/* Los productos concretos son implementaciones distintas de 
productos abstractos agrupados por variantes. Cada producto
abstracto debe implementarse en todas las variabtes dadas.
*/
export class ConcreteProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A1.";
    }
};