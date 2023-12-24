import FlyweightFactory;
import Flyweight;

#include <iostream>
#include <string>;

/* El cliente calcula o almacena el estado extrínseco de los objetos flyweight.
Desde la perspectiva del cliente, un objeto flyweight es un objeto plantilla
que puede configurarse durante el tiempo de ejecución
pasando información contextual dentro de los parámetros 
de sus métodos.
*/
void AddCarToPoliceDatabase(
    FlyweightFactory& ff, const std::string& plates, const std::string& owner,
    const std::string& brand, const std::string& model, const std::string& color)
{
    std::cout << "\nClient: Adding a car to database.\n";
    const Flyweight& flyweight = ff.GetFlyweight({ brand, model, color });
    flyweight.Operation({ owner, plates });
}

int main()
{
    FlyweightFactory* factory = new FlyweightFactory({ {"Chevrolet", "Camaro2018", "pink"}, {"Mercedes Benz", "C300", "black"}, {"Mercedes Benz", "C500", "red"}, {"BMW", "M5", "red"}, {"BMW", "X6", "white"} });
    factory->ListFlyweights();

    AddCarToPoliceDatabase(*factory,
        "CL234IR",
        "James Doe",
        "BMW",
        "M5",
        "red");

    AddCarToPoliceDatabase(*factory,
        "CL234IR",
        "James Doe",
        "BMW",
        "X1",
        "red");
    factory->ListFlyweights();
    delete factory;

    return 0;
}
