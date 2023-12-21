export module decorator;
export import component;

/* La clase decoradora base define un campo para referenciar un objeto
envuelto. El tipo del campo debe declararse como la interfaz del 
componente para que pueda contener tanto los componentes concretos
como los decoradores. La clase decoradora base delega todas las 
operaciones al objeto envuelto.
*/
export class Decorator : public Component {
    
protected:
    Component* component_;

public:
    Decorator(Component* component) : component_(component) {
    }

    std::string Operation() const override {
        return this->component_->Operation();
    }
};