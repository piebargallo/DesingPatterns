export module target;

import <string>;

/* 
La interfaz con el cliente describe un protocolo que otras clases 
deben seguir para poder colaborar con el código cliente. 
*/
export class Target {
public:
    virtual ~Target() = default;

    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
};