#pragma once

#include "PizzaStore.h"

class NYPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> createPizza(const std::string&) override;
};

