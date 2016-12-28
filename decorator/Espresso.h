#pragma once

#include "Beverage.h"

class Espresso : public Beverage
{
public:
    Espresso();
    double cost() const override;
};

Espresso::Espresso() : Beverage("Espresso") { }

double Espresso::cost() const {
    return 1.99;
}

