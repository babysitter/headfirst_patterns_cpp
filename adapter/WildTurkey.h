#pragma once

#include <iostream>

#include "Turkey.h"

class WildTurkey : public Turkey {
public:
    virtual void gobble();
    virtual void fly();
};

void WildTurkey::gobble() {
    std::cout << "Gobble gobble\n";
}

void WildTurkey::fly() {
    std::cout << "I'm flying a short distance\n";
}
