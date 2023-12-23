export module Product1;

import <vector>;
import <iostream>;

/* Los productos son los objetos resultantes. Los productos
construidos por distintos objetos constructores no tienen que
pertenecer a la misma jerarquía de clases o interfaz.
*/
export class Product1 {
public:
    std::vector<std::string> parts_;
    void ListParts()const {
        std::cout << "Product parts: ";
        for (size_t i = 0; i < parts_.size(); i++) {
            if (parts_[i] == parts_.back()) {
                std::cout << parts_[i];
            }
            else {
                std::cout << parts_[i] << ", ";
            }
        }
        std::cout << "\n\n";
    }
};