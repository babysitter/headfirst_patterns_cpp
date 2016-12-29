#pragma once

// turkey to duck adapter
class TurkeyAdapter : public Duck {
    // doesn't own resources
    Turkey& m_turkey;
public:
    TurkeyAdapter(Turkey&);
    virtual void quack();
    virtual void fly();
};

TurkeyAdapter::TurkeyAdapter(Turkey& turkey) : m_turkey(turkey) { }

void TurkeyAdapter::quack() {
    m_turkey.gobble();
}

void TurkeyAdapter::fly() {
    for (size_t i = 0; i < 5; ++i) {
        m_turkey.fly();
    }
}
