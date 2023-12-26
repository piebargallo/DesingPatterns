import Invoker;
import SimpleCommand;
import ComplexCommand;
import Receiver;

/* El cliente crea y configura los objetos de comando concretos.
El cliente debe pasar todos los par�metros de la solicitud, incluyendo
una instancia del receptor, dentro del constructor del comando.
Despu�s de eso, el comando resultante puede asociarse con uno
o var�os emisores.
*/
int main() {
    Invoker* invoker = new Invoker;
    invoker->SetOnStart(new SimpleCommand("Say Hi!"));
    Receiver* receiver = new Receiver;
    invoker->SetOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
    invoker->DoSomethingImportant();

    delete invoker;
    delete receiver;

    return 0;
}