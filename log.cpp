#include "log.h"

using namespace std;

void Log::log(string message){
    cout << "\033[1;32mLog " << nbr_message << " : " << message << "\033[0m" << endl;
    nbr_message++;
}