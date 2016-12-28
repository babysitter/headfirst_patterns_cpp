#pragma once

#include "Beverage.h"

class DarkRoast : public Beverage {
public:
    DarkRoast();
    double cost() const override;
};

DarkRoast::DarkRoast() : Beverage("Dark Roast Coffee") { }

double DarkRoast::cost() const {
    return 0.99;
}

