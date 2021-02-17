#include "basestation.h"

BaseStation::BaseStation(){
    name = "";
    nbr_temp = 0;
    nbr_hum = 0;
    pLog = nullptr;
}

void BaseStation::addTempSensor(string name, Color color)
{
    if (nbr_temp < BaseStation::nbrMaxSensors)
    {
        temps[nbr_temp].color = color;
        temps[nbr_temp].name = name;
        nbr_temp++;
    }
}

void BaseStation::addHumiditySensor(string name, Color color)
{
    if (nbr_hum < BaseStation::nbrMaxSensors)
    {
        hum[nbr_hum] = HumiditySensor(color, name);
        nbr_hum++;
    }
}

void BaseStation::measure()
{
    pLog->log("Start measure");

    for (int i = 0; i < nbr_temp; i++)
    {
        temps[i].measure();
    }

    for (int i = 0; i < nbr_hum; i++)
    {
        hum[i].measure();
    }
}