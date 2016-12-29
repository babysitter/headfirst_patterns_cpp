#pragma once

// turkey to duck adapter
class TurkeyClassAdapter : public Duck, private WildTurkey {
public:
    virtual void quack();
    virtual void fly();
};

void TurkeyClassAdapter::quack() {
    WildTurkey::gobble();
}

void TurkeyClassAdapter::fly() {
    for (size_t i = 0; i < 5; ++i) {
        WildTurkey::fly();
    }
}
