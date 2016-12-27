#pragma once

class QuackBehavior {
protected:
    virtual void operator()() = 0;
};

class Quack : public QuackBehavior {
public:
    void operator()() override {
        std::cout << "QUACK!" << std::endl;
    }
};

class Squeak : public QuackBehavior {
public:
    void operator()() override
    {
        std::cout << "SQUEAK!" << std::endl;
    }
};

class MuteQuack : public QuackBehavior {
public:
    void operator()() override
    {
        std::cout << "<< silence >>" << std::endl;
    }
};
