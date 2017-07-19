#include <TM1637.h>
#include <Nefry.h>

TM1637 led;

void setup()
{
}

void loop()
{
    for(int i=0; i<10000; i++)
    {
        led.DigitDisplayWrite(D2, D3, i);
        Nefry.ndelay(100);
        Nefry.println("TEST");
    }
}
