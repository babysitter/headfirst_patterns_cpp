#pragma once

#include "WeatherData.h"

class ObserverDisplay {
protected:
    WeatherData& m_weatherData;
    ObserverDisplay(WeatherData&);
public:
    virtual void update(double, double, double) = 0;
    virtual void display() = 0;
    virtual ~ObserverDisplay() { }
};

