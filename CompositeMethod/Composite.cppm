export module composite;
export import component;

import <list>;

/* El contenedor es un elemento que tiene subelementos:
hojas u otros contenedores. Un contenedor no conoce las clases 
concretas de sus hijos. Funciona con todos los subelementos
únicamente a través de la interfaz componente.
*/
export class Composite : public Component {
   
protected:
    std::list<Component*> children_;

public:
    
    void Add(Component* component) override {
        this->children_.push_back(component);
        component->SetParent(this);
    }
    
    void Remove(Component* component) override {
        children_.remove(component);
        component->SetParent(nullptr);
    }
    bool IsComposite() const override {
        return true;
    }
    
    std::string Operation() const override {
        std::string result;
        for (const Component* c : children_) {
            if (c == children_.back()) {
                result += c->Operation();
            }
            else {
                result += c->Operation() + "+";
            }
        }
        return "Branch(" + result + ")";
    }
};