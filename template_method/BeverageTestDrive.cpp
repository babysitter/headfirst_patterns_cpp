#include <iostream>

#include "Tea.h"
#include "Coffee.h"

int main() {
    Tea tea;
    Coffee coffee;

    std::cout << "\nMaking tea ...\n";
    tea.prepareRecipe();
    std::cout << "Done! ...\n";

    std::cout << "\nMaking coffee ...\n";
    coffee.prepareRecipe();
    std::cout << "Done! ...\n";
}

