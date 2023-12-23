export module Product;

import <string>;

/* El producto declara la interfaz que es común a todos los
peoductos que puede producir la clase creadora y sus subclases.
*/
export class Product {
public:
    virtual ~Product() {}
    virtual std::string Operation() const = 0;
};