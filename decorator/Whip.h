#pragma once

#include <type_traits>

template <class Decorator>
class Whip : public Decorator {
    static_assert(std::is_base_of<Beverage, Decorator>::value,
            "Condiment Decorator must be Beverage");
public:
    std::string getDescription() const override;
    double cost() const override;
};

template <class Decorator>
std::string Whip<Decorator>::getDescription() const {
    return Decorator::getDescription() + ", Whip";
}

template <class Decorator>
double Whip<Decorator>::cost() const {
    return 0.10 + Decorator::cost();
}

