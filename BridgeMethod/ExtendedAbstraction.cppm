export module extendedAbstraction;

export import abstraction;

/**
 * You can extend the Abstraction without changing the Implementation classes.
 */
export class ExtendedAbstraction : public Abstraction {
public:
    ExtendedAbstraction(Implementation* implementation) : Abstraction(implementation) {
    }
    std::string Operation() const override {
        return "ExtendedAbstraction: Extended operation with:\n" +
            this->implementation_->OperationImplementation();
    }
};