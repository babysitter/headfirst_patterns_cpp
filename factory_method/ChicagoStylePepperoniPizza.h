#pragma once

#include "Pizza.h"

class ChicagoStylePepperoniPizza : public Pizza {
public:
    ChicagoStylePepperoniPizza();
    void cut() override;
};

ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
    : Pizza("Chicago Style Pepperoni Pizza",
            "Extra Thick Crust Dough",
            "Plum Tomato Sauce") {
    m_toppings.push_back("Shredded Mozzarella Cheese");
    m_toppings.push_back("Black Olives");
    m_toppings.push_back("Spinach");
    m_toppings.push_back("Eggplant");
    m_toppings.push_back("Sliced Pepperoni");
}

void ChicagoStylePepperoniPizza::cut() {
    std::cout << "Cutting the pizza into square slices\n";
}

