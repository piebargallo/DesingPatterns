export module component;

import <string>;

/* El componente declara la interfaz com�n tanto para 
wrappers como para objetos envueltos.
*/
export class Component {
public:
    virtual ~Component() {}
    virtual std::string Operation() const = 0;
};