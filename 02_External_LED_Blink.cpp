/*
* Blink External LED @D2 using wait delay function
*/

#include "mbed.h"

DigitalOut ledPin(D2);
int main()
{   

    while (true) 
    {
        ledPin.write(1);
        thread_sleep_for(1000);
        ledPin.write(0);
        thread_sleep_for(1000);
    }
}
