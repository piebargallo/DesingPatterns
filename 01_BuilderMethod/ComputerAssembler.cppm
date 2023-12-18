export module computerAssembler;

import computer;
import computerBuilder;

/* La clase directora define el orden en el que invocar�n los pasos
de construcci�n, por lo que se pueden crear y reutilizar 
configuraciones espec�ficas de los productos.
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