#pragma once

#include <iostream>

class FlyBehavior {
protected:
    virtual void operator()() = 0;
};

class FlyWithWings : public FlyBehavior {
public:
    void operator()() override {
        std::cout << "Flapping my wings and flying!" << std::endl;
    }
};

class FlyNoWay : public FlyBehavior {
public:
    void operator()() override {
        std::cout << "I cant fly :(" << std::endl;
    }
};

class FlyRocketPowered : public FlyBehavior {
public:
    void operator()() override {
        std::cout << "Wow! Flying with a rocket!" << std::endl;
    }
};
