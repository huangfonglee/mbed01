#include "mbed.h"

void Led(DigitalOut &ledpin, int n)
{
   for (int i = 0; i < n; ++i)
   {                     //blink for 10 times
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(100ms);
   }
}