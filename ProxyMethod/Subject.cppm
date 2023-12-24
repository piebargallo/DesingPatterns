export module Subject;

/* Interfaz de servicio declara la interfaz del servicio.
El proxy debe seguir esta interfaz para poder camuflarse 
como objeto de servicio.
*/
export class Subject {
public:
    virtual void Request() const = 0;
};