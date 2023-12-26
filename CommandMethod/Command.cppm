export module Command;

/* La interfaz comando normalmente declara un único método
para ejecutar el comando.
*/
export class Command {
public:
    virtual ~Command() {
    }
    virtual void Execute() const = 0;
};