#pragma once

#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza();
    void cut() override;
};

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
    : Pizza("Chicago Style Deep Dish Cheese Pizza",
            "Extra Thick Crust Dough",
            "Plum Tomato Sauce") {
    m_toppings.push_back("Shredded Mozzarella Cheese");
}

void ChicagoStyleCheesePizza::cut() {
    std::cout << "Cutting the pizza into square slices\n";
}

