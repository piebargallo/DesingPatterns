export module Command;

/* La interfaz comando normalmente declara un �nico m�todo
para ejecutar el comando.
*/
export class Command {
public:
    virtual ~Command() {
    }
    virtual void Execute() const = 0;
};