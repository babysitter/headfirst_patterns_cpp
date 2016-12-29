#pragma once

#include <string>
#include <memory>

class Pizza;

class PizzaStore {
    virtual std::unique_ptr<Pizza> createPizza(const std::string&) = 0;
public:
    std::unique_ptr<Pizza> orderPizza(const std::string&);
    virtual ~PizzaStore() { }
};

