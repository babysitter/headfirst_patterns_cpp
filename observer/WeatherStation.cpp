#include <iostream>

#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

int main() {
    WeatherData wd;
    CurrentConditionsDisplay ccd(wd);

    wd.setMeasurements(80, 65, 30.4);
    wd.setMeasurements(82, 70, 29.2);
    wd.setMeasurements(78, 90, 29.2);
}

