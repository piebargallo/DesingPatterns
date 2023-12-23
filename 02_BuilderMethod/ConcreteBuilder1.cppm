export module ConcreteBuilder1;

export import Builder;
import Product1;

/* Los constructores concretos ofrecen distintas implementaciones de los
pasos de construcción. Los constructores concretos pueden crear
productos que no siguen la interfaz común.
*/
export class ConcreteBuilder1 : public Builder {
private:

    Product1* product;

public:

    ConcreteBuilder1() {
        this->Reset();
    }

    ~ConcreteBuilder1() {
        delete product;
    }

    void Reset() {
        this->product = new Product1();
    }
    
    void ProducePartA()const override {
        this->product->parts_.push_back("PartA1");
    }

    void ProducePartB()const override {
        this->product->parts_.push_back("PartB1");
    }

    void ProducePartC()const override {
        this->product->parts_.push_back("PartC1");
    }

    Product1* GetProduct() {
        Product1* result = this->product;
        this->Reset();
        return result;
    }
};

