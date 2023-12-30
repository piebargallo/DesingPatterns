export module Strategy;

import <string>;
import <algorithm>;

export class Strategy
{
public:
    virtual ~Strategy() = default;
    virtual std::string doAlgorithm(std::string_view data) const = 0;
};