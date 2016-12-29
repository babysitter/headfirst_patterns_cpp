#include "NYPizzaStore.h"

#include "NYStyleCheesePizza.h"
#include "NYStylePepperoniPizza.h"

std::unique_ptr<Pizza> NYPizzaStore::createPizza(
        const std::string& item) {
    if (0 == item.compare("cheese")) {
        return std::make_unique<NYStyleCheesePizza>();
    }
    if (0 == item.compare("pepperoni")) {
        return std::make_unique<NYStylePepperoniPizza>();
    }
    return { };
}

