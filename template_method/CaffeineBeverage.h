#pragma once

#include <iostream>

class CaffeineBeverage {
public:
    void prepareRecipe();
    virtual ~CaffeineBeverage() { }
protected:
    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    void boilWater();
    void pourInCup();
    // hook
    virtual bool customerWantsCondiments();
};

void CaffeineBeverage::prepareRecipe() {
    boilWater();
    brew();
    pourInCup();
    if (customerWantsCondiments()) {
        addCondiments();
    }
}

void CaffeineBeverage::boilWater() {
    std::cout << "Boiling water ...\n";
}

void CaffeineBeverage::pourInCup() {
    std::cout << "Pouring into cup ...\n";
}

bool CaffeineBeverage::customerWantsCondiments() {
    return true;
}

