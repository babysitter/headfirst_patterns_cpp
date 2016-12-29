#include "ChicagoPizzaStore.h"

#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStylePepperoniPizza.h"

std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(
        const std::string& item) {
    if (0 == item.compare("cheese")) {
        return std::make_unique<ChicagoStyleCheesePizza>();
    }
    if (0 == item.compare("pepperoni")) {
        return std::make_unique<ChicagoStylePepperoniPizza>();
    }
    return { };
}

