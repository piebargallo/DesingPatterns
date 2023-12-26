export module Handler;

import <string>;

/* La clase manejadora declara la interfaz común a todos
los manejadores concretos. Normalmente contiene un único método
para manejar solicitudes pero en ocasiones también puede 
contar con otro método para establecer el siguiente manejador
de la cadena.
*/
export class Handler {
public:
    virtual Handler* SetNext(Handler* handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};