#pragma once

#include "Pizza.h"

class NYStylePepperoniPizza : public Pizza {
public:
    NYStylePepperoniPizza();
};

NYStylePepperoniPizza::NYStylePepperoniPizza()
    : Pizza("NY Style Pepperoni Pizza",
            "Thin Crust Dough",
            "Marinara Sauce") {
    m_toppings.push_back("Grated Reggiano Cheese");
    m_toppings.push_back("Sliced Pepperoni");
    m_toppings.push_back("Garlic");
    m_toppings.push_back("Onion");
    m_toppings.push_back("Mushrooms");
    m_toppings.push_back("Red Pepper");
}

