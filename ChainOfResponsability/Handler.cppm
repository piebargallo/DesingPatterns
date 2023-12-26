export module Handler;

import <string>;

/* La clase manejadora declara la interfaz com�n a todos
los manejadores concretos. Normalmente contiene un �nico m�todo
para manejar solicitudes pero en ocasiones tambi�n puede 
contar con otro m�todo para establecer el siguiente manejador
de la cadena.
*/
export class Handler {
public:
    virtual Handler* SetNext(Handler* handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};