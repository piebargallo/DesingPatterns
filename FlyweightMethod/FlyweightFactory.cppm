export module FlyweightFactory;

import Flyweight;
import SharedState;

import <unordered_map>;
import <string>;

/* La fábrica flyweight gestiona un grupo de objetos flyweight existentes
Con la fábrica, los clientes no crean objetos flyweight directa...
En lugar de eso, invocan a la fábrica, pasándoles partes del objeto
flyweight deseado. La fábrica revisa los objetos flyweight creados
previa... y devuelve uno existente que coincida con los criterios
de búsqueda, o bien uno nuevo si no encuentra nada.
*/
export class FlyweightFactory
{
    
private:
    std::unordered_map<std::string, Flyweight> flyweights_;
    
    std::string GetKey(const SharedState& ss) const
    {
        return ss.brand_ + "_" + ss.model_ + "_" + ss.color_;
    }

public:
    FlyweightFactory(std::initializer_list<SharedState> share_states)
    {
        for (const SharedState& ss : share_states)
        {
            this->flyweights_.insert(std::make_pair<std::string, Flyweight>(this->GetKey(ss), Flyweight(&ss)));
        }
    }

    Flyweight GetFlyweight(const SharedState& shared_state)
    {
        std::string key = this->GetKey(shared_state);
        if (this->flyweights_.find(key) == this->flyweights_.end())
        {
            std::cout << "FlyweightFactory: Can't find a flyweight, creating new one.\n";
            this->flyweights_.insert(std::make_pair(key, Flyweight(&shared_state)));
        }
        else
        {
            std::cout << "FlyweightFactory: Reusing existing flyweight.\n";
        }
        return this->flyweights_.at(key);
    }
    void ListFlyweights() const
    {
        size_t count = this->flyweights_.size();
        std::cout << "\nFlyweightFactory: I have " << count << " flyweights:\n";
        for (std::pair<std::string, Flyweight> pair : this->flyweights_)
        {
            std::cout << pair.first << "\n";
        }
    }
};
