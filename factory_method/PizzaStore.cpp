#include "PizzaStore.h"
#include "Pizza.h"

std::unique_ptr<Pizza> PizzaStore::orderPizza(const std::string& type) {
    auto pizza = createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}

