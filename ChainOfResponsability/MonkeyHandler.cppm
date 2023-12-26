export module MonkeyHandler;

export import AbstractHandler;

/* Los manejadores concretos contienen el c�digo para procesar 
las solicitudes. Al recibir una solicitud, cada menejador debe
decidir si procesarlay, adem�s, si la pasa a lo largo de la cadena.
*/
export class MonkeyHandler : public AbstractHandler {
public:
    std::string Handle(std::string request) override {
        if (request == "Banana") {
            return "Monkey: I'll eat the " + request + ".\n";
        }
        else {
            return AbstractHandler::Handle(request);
        }
    }
};