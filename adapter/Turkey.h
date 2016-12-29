#pragma once

class Turkey { // interface
public:
    virtual void gobble() = 0;
    virtual void fly() = 0;
    virtual ~Turkey() { }
};
