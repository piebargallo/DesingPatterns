export module UniqueState;

import <string>;
import <iostream>;

/* La clase contexto contiene el estado extrínseco, único
en todos los objetos originales. Cuando un contexto se empareja
con uno de los objetos flyweight, representa el estado
completo del objeto original.
*/
export struct UniqueState
{
    std::string owner_;
    std::string plates_;

    UniqueState(const std::string& owner, const std::string& plates)
        : owner_(owner), plates_(plates)
    {
    }

    friend std::ostream& operator<<(std::ostream& os, const UniqueState& us)
    {
        return os << "[ " << us.owner_ << " , " << us.plates_ << " ]";
    }
};