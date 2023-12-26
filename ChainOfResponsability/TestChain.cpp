import Handler;
import MonkeyHandler;
import SquirrelHandler;
import DogHandler;

#include <iostream>
#include <vector>
#include <string>

/* El cliente puede componer cadenas una sola vez o componenrlas
dinámicamente, dependiendo de la lógica de la aplicación. Observa
que se puede enviar una solicitud a cualquier manejador de la cadena
, no tiene por qué ser el primero.
*/
void ClientCode(Handler& handler) {
    std::vector<std::string> food = { "Nut", "Banana", "Cup of coffee" };
    for (const std::string& f : food) {
        std::cout << "Client: Who wants a " << f << "?\n";
        const std::string result = handler.Handle(f);
        if (!result.empty()) {
            std::cout << "  " << result;
        }
        else {
            std::cout << "  " << f << " was left untouched.\n";
        }
    }
}

int main() {
    MonkeyHandler* monkey = new MonkeyHandler;
    SquirrelHandler* squirrel = new SquirrelHandler;
    DogHandler* dog = new DogHandler;
    monkey->SetNext(squirrel)->SetNext(dog);

    std::cout << "Chain: Monkey > Squirrel > Dog\n\n";
    ClientCode(*monkey);
    std::cout << "\n";
    std::cout << "Subchain: Squirrel > Dog\n\n";
    ClientCode(*squirrel);

    delete monkey;
    delete squirrel;
    delete dog;

    return 0;
}
