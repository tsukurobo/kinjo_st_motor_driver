#include <Wire.h>
#include <stdlib.h>
#include "ti2c.h"
#include "kinjo_stp_motor_driver.h"

uint8_t addr = 0x30;
KinjoStMotorDriver m1 = KinjoStMotorDriver(addr);

int degree = 0;

void setup()
{
  Wire.begin();
  Serial.begin(9600);
}

void loop()
{
    m1.rotate_degree(0);
    delay(2000);
        
    m1.rotate_degree(120);
    delay(2000);
 
    m1.rotate_degree(240);
   delay(2000);
 
    m1.rotate_degree(360);
   delay(2000);
 
    m1.rotate_degree(-240);
   delay(2000);
 
    m1.rotate_degree(-90);
   delay(2000);
 
  }
