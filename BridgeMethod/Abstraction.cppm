export module abstraction;

import implementation;

/**
 * The Abstraction defines the interface for the "control" part of the two class
 * hierarchies. It maintains a reference to an object of the Implementation
 * hierarchy and delegates all of the real work to this object.
 */

export class Abstraction {
    /**
     * @var Implementation
     */
protected:
    Implementation* implementation_;

public:
    Abstraction(Implementation* implementation) : implementation_(implementation) {
    }

    virtual ~Abstraction() {
    }

    virtual std::string Operation() const {
        return "Abstraction: Base operation with:\n" +
            this->implementation_->OperationImplementation();
    }
};