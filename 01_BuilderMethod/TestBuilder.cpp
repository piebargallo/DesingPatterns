import computerAssembler;
import desktopComputerBuilder;

import <iostream>;
using namespace std;

int main() {
	DesktopComputerBuilder desktopBuilder;
	ComputerAssembler assembler;
	Computer desktop = assembler.assembleComputer(desktopBuilder);

	cout << "Desktop Computer Configuration:" << endl;
	desktop.display();

	return 0;
}
