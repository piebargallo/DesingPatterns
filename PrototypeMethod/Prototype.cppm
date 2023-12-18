/* La interfaz prototipo declara los métodos de clonación.
En la mayoria de los casos se trata de un único método clone().
En este caso consta también del método Print().
Nota bene: el proyecto con estructura monolítica funciona con un solo 
método clone() */

export module prototype;

export class Prototype {
public:
    virtual ~Prototype() {}
    virtual Prototype* clone() const = 0;
    virtual void Print() const = 0;
};