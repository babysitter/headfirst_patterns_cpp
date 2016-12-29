#pragma once

// turkey to duck adapter
class TurkeyClassAdapter : public Duck, private WildTurkey {
public:
    void quack() override;
    void fly() override;
};

void TurkeyClassAdapter::quack() {
    WildTurkey::gobble();
}

void TurkeyClassAdapter::fly() {
    for (size_t i = 0; i < 5; ++i) {
        WildTurkey::fly();
    }
}
