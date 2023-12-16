#include <string>
export module car;

/* El producto declara la interfaz, que es común a todos los objetos
	que puede producir la clase creadora y sus subclases. */
export class ICar
{
public:
	virtual ~ICar() = default;  // Always a virtual destructor!
	virtual std::string info() const = 0;
};

/* Los productos concretos son distintas implementaciones de la 
	interfaz de producto. */
export class Ford : public ICar
{
public:
	std::string info() const override { return "Ford"; }
};

export class Toyota : public ICar
{
public:
	std::string info() const override { return "Toyota"; }
};
