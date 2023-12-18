export module desktopComputerBuilder;

export import computerBuilder;
import computer;

/* Los constructores concretos ofrecen distintas implementaciones
de los pasos de construcción. Los constructores concretos pueden crear
productos que no siguen la interfaz común.
*/
export class DesktopComputerBuilder : public ComputerBuilder {
public:
	DesktopComputerBuilder() {
		computer_ = Computer();
	}

	void buildCPU(const std::string& cpu) override {
		computer_.setCPU(cpu);
	}

	void buildMemory(const std::string& memory) override {
		computer_.setMemory(memory);
	}

	void buildStorage(const std::string& storage) override {
		computer_.setStorage(storage);
	}

	Computer getResult() override {
		return computer_;
	}

private:
	Computer computer_;
};

