#pragma once

#include <iostream>

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage {
protected:
    void brew() override;
    void addCondiments() override;
    // hook is not used -- default implementation called
};

void Tea::brew() {
    std::cout << "Steeping the tea ...\n";
}

void Tea::addCondiments() {
    std::cout << "Adding Lemon ...\n";
}

