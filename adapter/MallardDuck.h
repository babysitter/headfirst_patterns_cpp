#pragma once

#include <iostream>

#include "Duck.h"

class MallardDuck : public Duck {
public:
    virtual void quack();
    virtual void fly();
    virtual ~MallardDuck() { }
};

void MallardDuck::quack() {
    std::cout << "Quack\n";
}

void MallardDuck::fly() {
    std::cout << "I'm flying\n";
}

