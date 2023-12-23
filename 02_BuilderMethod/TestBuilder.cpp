import Director;
import ConcreteBuilder1;

#include <iostream>

/* El cliente debe asociar uno de los objetos constructores
con la clase directora. Normalmente, se hace una sola vez mediante
los par�metros del constructor de la clase directora, utiliza el 
objeto constructor para el resto de la construcci�n. No obstante,
existe una soluci�n alternativa para cuando el cliente pasa el objeto
constructor al m�todo de producci�n de la clase directora. En este
caso, puedes utilizar un constructor diferente cada vez que produzcas
algo con la clase directora.
*/
void ClientCode(Director& director)
{
    ConcreteBuilder1* builder = new ConcreteBuilder1();
    director.set_builder(builder);
    std::cout << "Standard basic product:\n";
    director.BuildMinimalViableProduct();

    Product1* p = builder->GetProduct();
    p->ListParts();
    delete p;

    std::cout << "Standard full featured product:\n";
    director.BuildFullFeaturedProduct();

    p = builder->GetProduct();
    p->ListParts();
    delete p;

    std::cout << "Custom product:\n";
    builder->ProducePartA();
    builder->ProducePartC();
    p = builder->GetProduct();
    p->ListParts();
    delete p;

    delete builder;
}

int main() {
    Director* director = new Director();
    ClientCode(*director);
    delete director;
    return 0;
}
