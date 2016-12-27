#include <iostream>
#include <vector>
#include <memory>

#include "Ducks.h"

class ModelDuck : public Duck {
public:
    ModelDuck() : Duck(FlyNoWay{}, Quack{}) {}
    void display() override {
        std::cout << "Look! I'm a MODEL duck!" << std::endl;
    }
};

int main() {
    using duck_ptr = std::unique_ptr<Duck>;

    std::vector<duck_ptr> ducks;
    ducks.push_back(std::make_unique<MallardDuck>());
    ducks.push_back(std::make_unique<RedheadDuck>());
    ducks.push_back(std::make_unique<RubberDuck>());
    ducks.push_back(std::make_unique<DecoyDuck>());

    for(auto& ptr : ducks) {
        ptr->display();
        ptr->swim();
        ptr->performQuack();
        ptr->performFly();
        std::cout << '\n';
    }

    ModelDuck model;
    model.display();
    std::cout << "first try to fly\n";
    model.performFly();
    std::cout << "second <better> try\n";
    model.setFlyBehavior(FlyRocketPowered{});
    model.performFly();

    return 0;
}

