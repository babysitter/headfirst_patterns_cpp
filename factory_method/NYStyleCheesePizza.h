#pragma once

#include "Pizza.h"

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza();
};

NYStyleCheesePizza::NYStyleCheesePizza()
    : Pizza("NY Style Sauce and Cheese Pizza",
            "Thin Crust Dough",
            "Marinara Sauce") {
    m_toppings.push_back("Grated Reggiano Cheese");
}

