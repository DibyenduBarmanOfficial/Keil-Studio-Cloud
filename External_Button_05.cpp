/*
* LED On and Off by using External Button
*/

#include "mbed.h"

DigitalOut ledPin(D13);
DigitalIn button(D11);

int main()
{  
    button.mode(PullUp); 
    while (true) 
    {
        if(button)
            ledPin = 0;
        else
            ledPin = 1;
    }
}
