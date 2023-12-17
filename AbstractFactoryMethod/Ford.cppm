/* Los productos concretos son implementaciones distintas de productos 
abstractos afrupados por variantes. Cada producto abstracto debe implementarse
en todas las variantes dadas. */

export module ford;

export import icar;
import <string>;

export class Ford : public ICar
{
};

export class FordSedan : public Ford
{
public:
	std::string info() const override { return "Ford Sedan"; }
};

export class FordSuv : public Ford
{
public:
	std::string info() const override { return "Ford Suv"; }
};
