#pragma once

#include <iostream>
#include <string>
#include <cctype>

#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage {
    char getUserInput() const;
protected:
    void brew() override;
    void addCondiments() override;
    bool customerWantsCondiments() override;
};

void Coffee::brew() {
    std::cout << "Dripping Coffee through filter ...\n";
}

void Coffee::addCondiments() {
    std::cout << "Adding Sugar and Milk ...\n";
}

bool Coffee::customerWantsCondiments() {
    char answer = getUserInput();

    if ('y' == answer) {
        return true;
    }
    return false;
}

char Coffee::getUserInput() const {
    std::cout <<
        "Would you like milk and sugar with your coffee (y/n)?\n";
    std::string answer;
    std::getline(std::cin, answer);
    if (!std::cin) {
        std::cerr << "IO error trying to read your answer\n";
    } 
    if (answer.empty()) {
        return 'n';
    }
    return tolower(answer[0]);
}

