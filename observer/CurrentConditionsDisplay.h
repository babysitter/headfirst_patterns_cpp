#pragma once

#include "ObserverDisplay.h"

class CurrentConditionsDisplay : public ObserverDisplay {
private:
    double m_temperature;
    double m_humidity;
public:
    CurrentConditionsDisplay(WeatherData&);
    void display() override;
    void update(double, double, double) override;
};

