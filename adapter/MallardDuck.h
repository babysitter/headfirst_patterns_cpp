#pragma once

#include <iostream>

#include "Duck.h"

class MallardDuck : public Duck {
public:
    void quack() override;
    void fly() override;
};

void MallardDuck::quack() {
    std::cout << "Quack\n";
}

void MallardDuck::fly() {
    std::cout << "I'm flying\n";
}

