#include <Nefry.h>
const int pinAdc = A0;

#include <TM1637.h>

TM1637 led;

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
  Nefry.ndelay(100);
  led.DigitDisplayWrite(D2, D3, sum);
}
