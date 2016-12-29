#pragma once

class Duck { // interface
public:
    virtual void quack() = 0;
    virtual void fly() = 0;
    virtual ~Duck() { }
};
