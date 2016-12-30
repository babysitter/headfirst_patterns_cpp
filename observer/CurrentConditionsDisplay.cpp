#include <iostream>

#include "CurrentConditionsDisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData& weatherData)
    : ObserverDisplay(weatherData) { }

void CurrentConditionsDisplay::display() {
    std::cout << "!Current conditions : " << m_temperature <<
        "F degrees and " << m_humidity << "%% humidity" << std::endl;
}

void CurrentConditionsDisplay::update(double temp,
        double humidity, double pressure) {
    m_temperature = temp;
    m_humidity = humidity;
    display();
}

