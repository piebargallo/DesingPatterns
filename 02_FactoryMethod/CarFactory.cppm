module;
#include <memory>
#include <cstddef>

export module car_factory;
export import car;

/* La clase creadora declara el método fábrica que devuelve nuevos objetos
	de producto. Es importante que el tipo de retorno coincida con la
	interfaz de producto.
	Se puede declarar el patrón Factory Method como abstracto para frozar 
	a todas las subclases a implementar sus propias versiones del método.
	Como alternativa, el método fábrica puede devolver algún tipo 
	de producto por defecto.*/
export class CarFactory
{
public:
	virtual ~CarFactory() = default;  // Always a virtual destructor!

	std::unique_ptr<ICar> requestCar()
	{
		// Increment the number of cars produced and return the new car.
		++m_numberOfCarsProduced;
		return createCar();
	}

	size_t getNumberOfCarsProduced() const
	{
		return m_numberOfCarsProduced;
	}

protected:
	virtual std::unique_ptr<ICar> createCar() = 0;

private:
	size_t m_numberOfCarsProduced{ 0 };
};

/* Los creadores concretos sobrescriben el Factory Method base
	de modo que devuelvan un tipo diferente de producto. */
export class FordFactory : public CarFactory
{
protected:
	std::unique_ptr<ICar> createCar() override
	{
		return std::make_unique<Ford>();
	}

};

export class ToyotaFactory : public CarFactory
{
protected:
	std::unique_ptr<ICar> createCar() override
	{
		return std::make_unique<Toyota>();
	}
};
