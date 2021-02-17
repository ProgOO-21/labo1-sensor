#pragma once

#include <iostream>

#include "sensors.h"
#include "log.h"

using namespace std;

class BaseStation {
  public:
  BaseStation();
    string name;

    void addTempSensor(string name, Color color = Color::Red);
    void addHumiditySensor(string name, Color color = Color::Blue);

    void measure();

    void setLogModule(Log* log){
        pLog = log;
    }

    TemperatureSensor& getTemperatureSensor(int id) { return temps[id]; }

  private:
    static const int nbrMaxSensors = 10;
    TemperatureSensor temps[nbrMaxSensors];
    int nbr_temp;
    HumiditySensor hum[nbrMaxSensors];
    int nbr_hum;
    Log* pLog;
};