#include "basestation.h"

void BaseStation::addTempSensor(string name, Color color)
{
    temps[nbr_temp].color = color;
    temps[nbr_temp].name = name;
    nbr_temp++;
}

void BaseStation::addHumiditySensor(string name, Color color)
{
    hum[nbr_hum] = HumiditySensor(color, name);
    nbr_hum++;
}

void BaseStation::measure(){
    for(int i=0; i<nbr_temp; i++){
        temps[i].measure();
    }

    for(int i=0; i<nbr_hum; i++){
        hum[i].measure();
    }
}