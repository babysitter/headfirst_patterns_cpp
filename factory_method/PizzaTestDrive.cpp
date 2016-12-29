#include <memory>
#include <iostream>

#include "Pizza.h"

#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

int main() {
    NYPizzaStore nyStore;
    ChicagoPizzaStore chicagoStore;

    std::unique_ptr<Pizza> pizza { nyStore.orderPizza("cheese") };
    std::cout << "** Ethan ordered a " << pizza->getName() << "\n";

    std::cout << '\n';

    pizza = chicagoStore.orderPizza("cheese");
    std::cout << "** Joel ordered a " << pizza->getName() << "\n";

}
