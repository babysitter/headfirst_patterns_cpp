#pragma once

#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend();
    double cost() const override;
};

HouseBlend::HouseBlend() : Beverage("House Blend Coffee") { }

double HouseBlend::cost() const {
    return 0.89;
}

