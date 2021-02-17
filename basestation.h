#pragma once

#include <iostream>

#include "sensors.h"

using namespace std;

class BaseStation {
   public:
    string name;

    void addTempSensor(string name, Color color);
    void addHumiditySensor(string name, Color color);

    void measure();

    TemperatureSensor& getTemperatureSensor(int id){
        return temps[id];
    }

   private:
    TemperatureSensor temps[10];
    int nbr_temp;
    HumiditySensor hum[10];
    int nbr_hum;
};