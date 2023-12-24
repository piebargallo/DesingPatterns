export module RealSubject;

export import Subject;

import <iostream>;

export class RealSubject : public Subject {
public:
    void Request() const override {
        std::cout << "RealSubject: Handling request.\n";
    }
};