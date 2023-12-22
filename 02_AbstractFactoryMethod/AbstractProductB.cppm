export module abstractProductB;

import abstractProductA;
import <string>;

export class AbstractProductB {
    
public:
    virtual ~AbstractProductB() {};
    virtual std::string UsefulFunctionB() const = 0;
    
    virtual std::string AnotherUsefulFunctionB(const AbstractProductA& collaborator) const = 0;
};