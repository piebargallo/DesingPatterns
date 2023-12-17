/* La interfaz Fábrica abstrcta declara un grupo de métodos para crear
cada uno de los productos abstractos. */

export module iabstractCarFactory;

import icar;
import <memory>;

export class IAbstractCarFactory
{
public:
	virtual ~IAbstractCarFactory() = default;  // Always a virtual destructor!
	virtual std::unique_ptr<ICar> makeSuv() = 0;
	virtual std::unique_ptr<ICar> makeSedan() = 0;
};
