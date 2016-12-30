#include "WeatherData.h"
#include "ObserverDisplay.h"

void WeatherData::notifyObserver() {
    for(auto i : m_observers) {
        i->update(m_temp, m_humidity, m_pressure);
    }
}

void WeatherData::mesurementsChanged() {
    notifyObserver();
}

double WeatherData::temp() const {
    return m_temp;
}

double WeatherData::humidity() const {
    return m_humidity;
}

double WeatherData::pressure() const {
    return m_pressure;
}

void WeatherData::setMeasurements(double temp,
        double humidity, double pressure) {
    m_temp = temp;
    m_humidity = humidity;
    m_pressure = pressure;
    mesurementsChanged();
}

