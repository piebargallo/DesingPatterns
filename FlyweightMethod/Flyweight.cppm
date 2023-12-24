export module Flyweight;

import SharedState;
import UniqueState;

/* contiene la parte del estado del objeto original que
pueden compartir varios objetos. El mismo objeto flyweight
puede utilizarse en muchos contextos diferentes. El estado
almacenado dentro de un objeto flyweight se denomina intríseco
mientras que el que se pasa a sus métodos se le llama extrínseco.
*/
export class Flyweight
{
private:
    SharedState* shared_state_;

public:
    Flyweight(const SharedState* shared_state) : shared_state_(new SharedState(*shared_state))
    {
    }
    Flyweight(const Flyweight& other) : shared_state_(new SharedState(*other.shared_state_))
    {
    }
    ~Flyweight()
    {
        delete shared_state_;
    }
    SharedState* shared_state() const
    {
        return shared_state_;
    }
    void Operation(const UniqueState& unique_state) const
    {
        std::cout << "Flyweight: Displaying shared (" << *shared_state_ << ") and unique (" << unique_state << ") state.\n";
    }
};