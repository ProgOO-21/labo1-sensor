#include "sensors.h"

#include <iostream>

using namespace std;

string colorToString(Color c)
{
    switch (c)
    {
        case Black:
            return "black";
        case White:
            return "white";
        case Red:
            return "red";
        case Blue:
            return "blue";
    }
    return "";
}

// PowerModule class

PowerModule::PowerModule(){
    voltage = 0;
}

string PowerModule::toString()
{
    return "Power voltage : " + std::to_string(this->voltage);
}

// TemperatureSensor class

TemperatureSensor::TemperatureSensor(Color col, string name)
    : color(col), name(name), temperature(0.0)
{}

string TemperatureSensor::toString()
{
    return "Name : " + name + " / Color : " + colorToString(color) + " / " +
           power.toString();
}

void TemperatureSensor::measure()
{
    cout << "Le capteur : " << name << " mesure la température" << endl;
}

// HumiditySensor class

HumiditySensor::HumiditySensor(Color col, string name) : color(col), name(name)
{}

void HumiditySensor::measure()
{
    cout << "Le capteur : " << name << " mesure l'humidité" << endl;
}
