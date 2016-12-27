#pragma once

#include <functional>
#include <memory>

#include "FlyBehaviors.h"
#include "QuackBehaviors.h"

class Duck {
protected:
    using FlyBehavior = std::function<void()>;
    using QuackBehavior = std::function<void()>;

    FlyBehavior m_fb;
    QuackBehavior m_qb;
public:
    Duck(const FlyBehavior&, const QuackBehavior&);
    virtual ~Duck() { }

    void swim();
    virtual void display() = 0;
    void performFly();
    void performQuack();
    // setting behavior dynamically
    void setFlyBehavior(const FlyBehavior&);
    void setQuackBehavior(const QuackBehavior&);
};

class MallardDuck : public Duck {
public:
    void display() override;
    MallardDuck();
};

class RedheadDuck : public Duck {
public:
    void display() override;
    RedheadDuck();
};

class RubberDuck : public Duck
{
public:
    virtual void display() override;
    RubberDuck();
};

class DecoyDuck : public Duck
{
public:
    void display() override;
    DecoyDuck();
};

