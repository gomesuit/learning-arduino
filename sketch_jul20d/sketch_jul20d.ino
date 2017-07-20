#include <Nefry.h>
const int pinAdc = A0;

void setup()
{
}

void loop()
{
    long sum = 0;
    for(int i=0; i<32; i++)
    {
        sum += analogRead(pinAdc);
    }

    sum >>= 5;

    Nefry.println(sum);
    Nefry.ndelay(10);
}
