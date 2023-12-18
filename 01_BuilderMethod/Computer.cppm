export module computer;

import <iostream>;
import <string>;

/* Los productos son los objetos resultantes.los productos 
construidos por distintos objetos constructores no tienen que
pertenecer a la misma jerarquía de clases o interfaz.
*/

export class Computer {
public:
	void setCPU(const std::string& cpu) {
		cpu_ = cpu;
	}

	void setMemory(const std::string& memory) {
		memory_ = memory;
	}

	void setStorage(const std::string& storage) {
		storage_ = storage;
	}

	void display() {
		std::cout << "CPU: " << cpu_ << std::endl;
		std::cout << "Memory: " << memory_ << std::endl;
		std::cout << "Storage: " << storage_ << std::endl;
	}

private:
	std::string cpu_;
	std::string memory_;
	std::string storage_;
};


