import PizzaFactory;
import Pizza;
import NewYorkPizzaFactory;
import ChicagoPizzaFactory;

int main()
{
    // Create a New York Pizza Factory
    PizzaFactory* newYorkFactory
        = new NewYorkPizzaFactory();
    Pizza* newYorkCheesePizza
        = newYorkFactory->createCheesePizza();
    Pizza* newYorkPepperoniPizza
        = newYorkFactory->createPepperoniPizza();

    // Create a Chicago Pizza Factory
    PizzaFactory* chicagoFactory
        = new ChicagoPizzaFactory();
    Pizza* chicagoCheesePizza
        = chicagoFactory->createCheesePizza();
    Pizza* chicagoPepperoniPizza
        = chicagoFactory->createPepperoniPizza();

    // Order and prepare the pizzas
    newYorkCheesePizza->bake();
    newYorkCheesePizza->cut();
    newYorkCheesePizza->box();

    newYorkPepperoniPizza->bake();
    newYorkPepperoniPizza->cut();
    newYorkPepperoniPizza->box();

    chicagoCheesePizza->bake();
    chicagoCheesePizza->cut();
    chicagoCheesePizza->box();

    chicagoPepperoniPizza->bake();
    chicagoPepperoniPizza->cut();
    chicagoPepperoniPizza->box();

    // Clean up
    delete newYorkFactory;
    delete newYorkCheesePizza;
    delete newYorkPepperoniPizza;
    delete chicagoFactory;
    delete chicagoCheesePizza;
    delete chicagoPepperoniPizza;

    return 0;
}
