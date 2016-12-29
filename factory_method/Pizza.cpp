#include "Pizza.h"

Pizza::Pizza(const std::string& name,
        const std::string& dough, const std::string& sauce) :
        m_name(name), m_dough(dough), m_sauce(sauce) { }

const std::string& Pizza::getName() const {
    return m_name;
}

void Pizza::prepare() {
    std::cout << "Preparing " << m_name << "\n" <<
        "Tossing dough...\n" <<
        "Adding sauce...\n" <<
        "Adding toppings: \n";

    for (const auto& top : m_toppings) {
        std::cout << "   " << top << "\n";
    }
}

void Pizza::bake() {
    std::cout << "Bake for 25 minutes at 350\n";
}

void Pizza::cut() {
    std::cout << "Cutting the pizza into diagonal slices\n";
}

void Pizza::box() {
    std::cout << "Place pizza in official PizzaStore box\n";
}

std::ostream& operator<<(std::ostream& stream, const Pizza& pizza) {
    // code to display pizza name and ingredients
    stream << "---- " << pizza.m_name << " ----\n" <<
        pizza.m_dough << "\n" << pizza.m_sauce << "\n";
    for (const std::string& topping : pizza.m_toppings) {
        stream << topping << "\n";
    }
    return stream;
}

