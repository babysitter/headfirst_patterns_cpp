#pragma once

#include <string>

class Beverage {
protected:
    std::string m_desc;
public:
    Beverage();
    Beverage(const char*);
    Beverage(std::string);
    virtual ~Beverage() = default;

    virtual std::string getDescription() const;
    virtual double cost() const = 0;
};

Beverage::Beverage() : Beverage("Unknown Beverage") { }
Beverage::Beverage(const char* desc) : m_desc(desc) { }
Beverage::Beverage(std::string tmp) : m_desc(std::move(tmp)) { }

std::string Beverage::getDescription() const {
    return m_desc;
}

