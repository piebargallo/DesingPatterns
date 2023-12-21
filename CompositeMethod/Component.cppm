export module component;

import <string>;

/* 
La interfaz componente describe operaciones que son comunes 
a elementos simples y complejos del árbol.
*/
export class Component {
    /**
     * @var Component
     */
protected:
    Component* parent_;
    /**
     * Optionally, the base Component can declare an interface for setting and
     * accessing a parent of the component in a tree structure. It can also
     * provide some default implementation for these methods.
     */
public:
    virtual ~Component() {}
    void SetParent(Component* parent) {
        this->parent_ = parent;
    }
    Component* GetParent() const {
        return this->parent_;
    }
    
    virtual void Add(Component* component) {}
    virtual void Remove(Component* component) {}
    
    virtual bool IsComposite() const {
        return false;
    }
    
    virtual std::string Operation() const = 0;
};