/*
* LED On and Off by using User Button
*/

#include "mbed.h"

DigitalOut ledPin(D13);
DigitalIn button(PC_13);

int main()
{   
    while (true) 
    {
        if(button)
            ledPin = 0;
        else
            ledPin = 1;
    }
}
