#pragma once

#include <iostream>

using namespace std;

enum Color
{
    Black,
    White,
    Red,
    Blue
};

string colorToString(Color c);

class PowerModule {
   public:
    string toString();
    int getVoltage(){
        return voltage;
    }
    void setVoltage(int value){
        voltage = value;
    }
private:
    int voltage;
};

class TemperatureSensor {
   public:
    TemperatureSensor(){};
    TemperatureSensor(Color col, string name);

    Color color;
    string name;
    PowerModule power;

    string toString();
    void measure();
    double getTemperature(){
        return temperature;
    }

   private:
    double temperature;
};

class HumiditySensor {
   public:
    HumiditySensor(){};
    HumiditySensor(Color col, string name);

    Color color;
    string name;

    void measure();
    double getHumidity(){
        return humidity;
    }

   private:
    double humidity;
};