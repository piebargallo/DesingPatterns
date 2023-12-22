export module subsystem2;

import <string>;

/**
 * Some facades can work with multiple subsystems at the same time.
 */
export class Subsystem2 {
public:
    std::string Operation1() const {
        return "Subsystem2: Get ready!\n";
    }
    // ...
    std::string OperationZ() const {
        return "Subsystem2: Fire!\n";
    }
};