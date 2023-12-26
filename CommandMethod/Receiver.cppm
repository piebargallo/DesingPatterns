export module Receiver;

import <iostream>;
import <string>;

/* La clase receptora contiene cierta lógica de negocio. Casi cualquier
objeto puede actuar como receptor. La mayoría de los comandos
solo gestiona los detalles sobre cómo pasa una solicitud al receptor, mientras
que el propio receptor hace el trabajo real.
*/
export class Receiver {
public:
    void DoSomething(const std::string& a) {
        std::cout << "Receiver: Working on (" << a << ".)\n";
    }
    void DoSomethingElse(const std::string& b) {
        std::cout << "Receiver: Also working on (" << b << ".)\n";
    }
};