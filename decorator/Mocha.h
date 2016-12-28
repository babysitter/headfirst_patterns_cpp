#pragma once

#include <type_traits>

template <class Decorator>
class Mocha : public Decorator {
    static_assert(std::is_base_of<Beverage, Decorator>::value,
            "Condiment Decorator must be Beverage");
public:
    std::string getDescription() const override;
    double cost() const override;
};

template <class Decorator>
std::string Mocha<Decorator>::getDescription() const {
    return Decorator::getDescription() + ", Mocha";
}

template <class Decorator>
double Mocha<Decorator>::cost() const {
    return 0.20 + Decorator::cost();
}

