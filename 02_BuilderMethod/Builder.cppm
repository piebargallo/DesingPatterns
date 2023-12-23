export module Builder;

/* La interfaz constructora declara pasos de construcci�n de 
producto que todos los tipos de objetos constructores tienen en 
com�n. 
*/
export class Builder {
public:
    virtual ~Builder() {}
    virtual void ProducePartA() const = 0;
    virtual void ProducePartB() const = 0;
    virtual void ProducePartC() const = 0;
};