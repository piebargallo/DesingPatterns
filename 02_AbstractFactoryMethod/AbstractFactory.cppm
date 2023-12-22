export module abstractFactory;

import abstractProductA;
import abstractProductB;

/* La interfaz fábrica abstracta declara un grupo de métodos
para crear cada uno de los productos abstractos.
*/
export class AbstractFactory {
public:
    virtual AbstractProductA* CreateProductA() const = 0;
    virtual AbstractProductB* CreateProductB() const = 0;
};