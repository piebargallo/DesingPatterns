/* Los productos abstractos declaran para un grupo de productos
diferentes pero relacionados que forman una familia de productos. */

export module icar;

import <string>;

export class ICar
{
public:
	virtual ~ICar() = default;  // Always a virtual destructor!
	virtual std::string info() const = 0;
};
