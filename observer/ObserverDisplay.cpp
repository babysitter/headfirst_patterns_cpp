#include "ObserverDisplay.h"

ObserverDisplay::ObserverDisplay(WeatherData& weatherData)
    : m_weatherData(weatherData) {
    m_weatherData.registerObserver(this);
}

