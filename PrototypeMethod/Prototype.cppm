/* La interfaz prototipo declara los m�todos de clonaci�n.
En la mayoria de los casos se trata de un �nico m�todo clone().
En este caso consta tambi�n del m�todo Print().
Nota bene: el proyecto con estructura monol�tica funciona con un solo 
m�todo clone() */

export module prototype;

export class Prototype {
public:
    virtual ~Prototype() {}
    virtual Prototype* clone() const = 0;
    virtual void Print() const = 0;
};