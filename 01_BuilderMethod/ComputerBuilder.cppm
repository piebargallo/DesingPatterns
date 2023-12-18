export module computerBuilder;

import computer;

import <string>;

/* La interfaz constructora declara pasos de construcción de producto
que todos los tipos de constructores tienen en común. 
*/
export class ComputerBuilder {
public:
	virtual void buildCPU(const std::string& cpu) = 0;
	virtual void buildMemory(const std::string& memory) = 0;
	virtual void buildStorage(const std::string& storage) = 0;
	virtual Computer getResult() = 0;
};

