export module Singleton;

import <string>;
import <mutex>;

export class Singleton
{

private:
    static Singleton* pinstance_;
    static std::mutex mutex_;

protected:
    Singleton(const std::string value) : value_(value)
    {
    }
    ~Singleton() {}
    std::string value_;

public:
    Singleton(Singleton& other) = delete;
    void operator=(const Singleton&) = delete;
    static Singleton* GetInstance(const std::string& value);
    void SomeBusinessLogic()
    {
        // ...
    }

    std::string value() const {
        return value_;
    }
};

Singleton* Singleton::pinstance_{nullptr};
std::mutex Singleton::mutex_;
