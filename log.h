#pragma once

#include <iostream>

class Log{
    public:
    Log(){
        nbr_message = 1;
    }
    void log(std::string message);
    
private:
    int nbr_message;    
};