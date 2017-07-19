#include <Wire.h>
#include <Digital_Light_TSL2561.h>

#include <Nefry.h>

#include <TM1637.h>

TM1637 led;

void setup()
{
  Wire.begin();
  TSL2561.init();
}

void loop()
{
  int value = TSL2561.readVisibleLux();
  Nefry.print("The Light value is: ");
  Nefry.println(value);
  led.DigitDisplayWrite(D2, D3, value);
  Nefry.ndelay(1000);
}
