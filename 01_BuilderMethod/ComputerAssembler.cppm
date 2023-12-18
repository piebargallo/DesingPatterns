export module computerAssembler;

import computer;
import computerBuilder;

/* La clase directora define el orden en el que invocarán los pasos
de construcción, por lo que se pueden crear y reutilizar 
configuraciones específicas de los productos.
*/
export class ComputerAssembler {
public:
	Computer assembleComputer(ComputerBuilder& builder) {
		builder.buildCPU("Intel i7");
		builder.buildMemory("16GB");
		builder.buildStorage("512GB SSD");
		return builder.getResult();
	}
};