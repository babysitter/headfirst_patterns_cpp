#include <iostream>

#include "HouseBlend.h"
#include "Espresso.h"
#include "DarkRoast.h"

#include "Mocha.h" 
#include "Soy.h"
#include "Whip.h"

int main()
{
    Espresso beverage;
    std::cout <<  beverage.getDescription() <<
        " $" <<  beverage.cost() << '\n';

    Whip<Mocha<Mocha<DarkRoast>>> beverage2;
    std::cout <<  beverage2.getDescription() <<
        " $" <<  beverage2.cost() << '\n';

    Whip<Mocha<Soy<HouseBlend>>> beverage3;
    std::cout <<  beverage3.getDescription() <<
        " $" <<  beverage3.cost() << '\n';
}

