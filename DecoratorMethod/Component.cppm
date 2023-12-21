export module component;

import <string>;

/* El componente declara la interfaz común tanto para 
wrappers como para objetos envueltos.
*/
export class Component {
public:
    virtual ~Component() {}
    virtual std::string Operation() const = 0;
};