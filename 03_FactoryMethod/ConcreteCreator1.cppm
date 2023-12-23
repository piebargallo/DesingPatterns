export module ConcreteCreator1;

export import Creator;
import ConcreteProduct1;

/* La clase creadora declara el m�todo f�brica que devuelve
nuevos objetos de producto. Es importante que el tipo de 
retorno de este m�todo coincida con la interfaz de producto.
*/
export class ConcreteCreator1 : public Creator {
    
public:
    Product* FactoryMethod() const override {
        return new ConcreteProduct1();
    }
};