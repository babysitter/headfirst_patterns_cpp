#pragma once

#include <string>
#include <iostream>
#include <vector>

class Pizza {
    friend std::ostream& operator<<(std::ostream&, const Pizza&);
protected:
    std::string m_name;
    std::string m_dough;
    std::string m_sauce;

    std::vector<std::string> m_toppings;
public:
    Pizza(const std::string&, const std::string&, const std::string&);
    virtual ~Pizza() { }

    const std::string& getName() const;

    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();
};

