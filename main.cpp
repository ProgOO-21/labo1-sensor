#include "main.h"

using namespace std;

int saisieInt(string message)
{
    cout << message << endl;
    int val = 0;
    do
    {
        cin >> val;

        if (cin.fail())
        {
            cout << "Saisie incorrecte, recommencez : ";
            cin.clear();
            cin.ignore('\n');
        }
        else
        {
            return val;
        }
    } while (true);
}

int main()
{
    cout << "Labo 1" << endl;

    Log log;

    BaseStation bs;
    bs.setLogModule(&log);
    bs.addHumiditySensor("Hum 1", Color::Red);
    bs.addTempSensor("Temp 1");
    bs.addTempSensor("Temp 2", Color::White);

    bs.measure();
    bs.measure();

    // Alias pour simplifier l'écriture
    // Ne pas oublier la référence
    TemperatureSensor& t = bs.getTemperatureSensor(0);
    t.power.setVoltage(12);
    cout << t.toString() << endl;
}