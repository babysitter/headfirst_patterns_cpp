#pragma once

#include "Subject.h"

class WeatherData : public Subject {
private:
    double m_temp;
    double m_humidity;
    double m_pressure;
public:
    void notifyObserver() override;
    void mesurementsChanged();

    double temp() const;
    double humidity() const;
    double pressure() const;

    //  method for testing
    void setMeasurements(double, double, double);
};

