/* Las f�bricas concretas implementan m�todos de creaci�n de f�brica abstracta.
Cada f�brica concreta se corresponde con una variante espec�fica de los productos
y crea tan solo dichas variantes de los productos. */

export module toyota_factory;

export import iabstractCarFactory;
import icar;
import toyota;
import <memory>;

export class ToyotaFactory : public IAbstractCarFactory
{
public:
	std::unique_ptr<ICar> makeSuv() override { return std::make_unique<ToyotaSuv>(); }
	std::unique_ptr<ICar> makeSedan() override { return std::make_unique<ToyotaSedan>(); }
};
