export module Pizza;

// Abstract Product Interface
export class Pizza {
public:
    virtual void bake() = 0;
    virtual void cut() = 0;
    virtual void box() = 0;
};