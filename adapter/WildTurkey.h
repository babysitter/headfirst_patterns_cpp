#pragma once

#include <iostream>

#include "Turkey.h"

class WildTurkey : public Turkey {
public:
    void gobble() override;
    void fly() override;
};

void WildTurkey::gobble() {
    std::cout << "Gobble gobble\n";
}

void WildTurkey::fly() {
    std::cout << "I'm flying a short distance\n";
}
