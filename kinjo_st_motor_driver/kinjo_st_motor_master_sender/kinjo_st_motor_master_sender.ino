#include <Wire.h>
#include <stdlib.h>
#include "ti2c.h"
#include "kinjo_stp_motor_driver.h"

uint8_t addr = 0x33;
KinjoStMotorDriver m1 = KinjoStMotorDriver(addr);

void setup()
{
  Wire.begin();
  Serial.begin(9600);
}

void loop()
{
  int i;
  for (i = 0 ; i < 12 ; i++)
  {
    m1.rotate_degree(i * 30);
    delay(500);
  }

  for (i = 12 ; i > 0 ; i--)
  {
    m1.rotate_degree(i * 30);
    delay(500);
  }
}
