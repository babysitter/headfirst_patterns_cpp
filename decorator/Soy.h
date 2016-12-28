#pragma once

#include <type_traits>

template <class Decorator>
class Soy : public Decorator {
    static_assert(std::is_base_of<Beverage, Decorator>::value,
            "Condiment Decorator must be Beverage");
public:
    std::string getDescription() const override;
    double cost() const override;
};

template <class Decorator>
std::string Soy<Decorator>::getDescription() const {
    return Decorator::getDescription() + ", Soy";
}

template <class Decorator>
double Soy<Decorator>::cost() const {
    return 0.15 + Decorator::cost();
}

