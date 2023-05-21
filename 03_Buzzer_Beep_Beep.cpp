/*
* Buzzer Beep Beep @D2 using wait_ms delay function
*/

#include "mbed.h"

DigitalOut buzPin(PA_10);
//DigitalOut buzPin(D2);
int main()
{   

    while (true) 
    {
        buzPin.write(1);
        thread_sleep_for(300);
        buzPin.write(0);
        thread_sleep_for(300);
    }
}
