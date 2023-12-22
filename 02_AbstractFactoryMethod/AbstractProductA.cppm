export module abstractProductA;

import <string>;

/* Los productos abstractos declaran interfaces para un
grupo de productos diferentse pero relacionados que forman
una familia de productos.
*/
export class AbstractProductA {
public:
    virtual ~AbstractProductA() {};
    virtual std::string UsefulFunctionA() const = 0;
};