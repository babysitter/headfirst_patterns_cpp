#include <iostream>
#include <memory>

#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"
#include "TurkeyClassAdapter.h"

static inline void testDuck(Duck& duck) {
    duck.quack();
    duck.fly();
}

void objectAdapterTestDrive() {
    std::cout << "\n** Object Adapter Pattern Test Drive **\n\n";

    WildTurkey turkey;
    std::cout << "The Turkey says...\n";
    turkey.gobble();
    turkey.fly();

    MallardDuck duck;
    std::cout << "\nThe Duck says...\n";
    testDuck(duck);

    TurkeyAdapter turkeyAdapter(turkey);
    std::cout << "\nThe TurkeyAdapter says...\n";
    testDuck(turkeyAdapter);
}

void classAdapterTestDrive() {
    std::cout << "\n** Class Adapter Pattern Test Drive **\n\n";

    WildTurkey turkey;
    std::cout << "The Turkey says...\n";
    turkey.gobble();
    turkey.fly();

    MallardDuck duck;
    std::cout << "\nThe Duck says...\n";
    testDuck(duck);

    TurkeyClassAdapter turkeyClassAdapter;
    std::cout << "\nThe TurkeyAdapter says...\n";
    testDuck(turkeyClassAdapter);
}

int main() {
    objectAdapterTestDrive();
    classAdapterTestDrive();
}
