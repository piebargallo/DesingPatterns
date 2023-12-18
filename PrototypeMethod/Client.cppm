/* El cliente puede producir una copia de cualquier objeto
que siga la interfaz del prototipo. */

export module client;

import prototype;

import <iostream>;
import <string>;
import <unordered_map>;

export class Client {
public:
    void Register(const std::string& id, Prototype* prototype) {
        prototypes_[id] = prototype;
    }

    Prototype* Create(const std::string& id) {
        auto it = prototypes_.find(id);
        if (it == prototypes_.end()) {
            std::cout << "Prototype with ID: " << id << " does not exist." << std::endl;
            return nullptr;
        }
        return it->second->clone();
    }

private:
    std::unordered_map<std::string, Prototype*> prototypes_;
};


