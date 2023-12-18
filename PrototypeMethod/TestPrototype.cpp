import client;
import prototype;
import concretePrototype;

int main() {
    Client client;

    // Register a ConcretePrototype with ID "1".
    client.Register("1", new ConcretePrototype("John Doe", 30));

    // Create a new object by cloning the ConcretePrototype with ID "1".
    Prototype* p1 = client.Create("1");
    p1->Print();  // Output: Name: John Doe, Age: 30

    // Register another ConcretePrototype with ID "2".
    client.Register("2", new ConcretePrototype("Jane Doe", 25));

    // Create a new object by cloning the ConcretePrototype with ID "2".
    Prototype* p2 = client.Create("2");
    p2->Print();  // Output: Name: Jane Doe, Age: 25

    delete p1;
    delete p2;

    return 0;
}
