#include "Ducks.h"

#include <iostream>

//  DUCK superclass
Duck::Duck(const FlyBehavior& fb, const QuackBehavior& qb)
    : m_fb(fb), m_qb(qb) { }

void Duck::swim() {
    std::cout << "All ducks float, even decoys!" << std::endl;
}

void Duck::performFly() {
    m_fb();
}
void Duck::performQuack() {
    m_qb();
}

void Duck::setFlyBehavior(const FlyBehavior& fb) {
    m_fb = fb;
}

void Duck::setQuackBehavior(const QuackBehavior& qb) {
    m_qb = qb;
}

//  DUCK subclasses

// MallardDuck
MallardDuck::MallardDuck() : Duck(FlyWithWings{}, Quack{}) { }

void MallardDuck::display() {
    std::cout << "Look! I'm a real Mallard duck!" << std::endl;
}

// RedheadDuck
RedheadDuck::RedheadDuck() : Duck(FlyWithWings{}, Quack{}) { }

void RedheadDuck::display() {
    std::cout << "Look! I'm a Hot Redhead!" << std::endl;
}

// RubberDuck
RubberDuck::RubberDuck() : Duck(FlyNoWay{}, Squeak{}) { }

void RubberDuck::display() {
    std::cout << "Look! I'm a RUBBER duck!" << std::endl;
}

// DecoyDuck
DecoyDuck::DecoyDuck() : Duck(FlyNoWay{}, MuteQuack{}) { }

void DecoyDuck::display() {
    std::cout << "Look! I'm a DECOY duck!" << std::endl;
}
