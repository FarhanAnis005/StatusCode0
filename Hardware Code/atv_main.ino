/*
 * This program is property of SME Dehradun. for any query related to this program, 
 * contact us at www.smedehradn.com
 * if your want any soluiton related for any IoT Customized Boards and Sensor, 
 * then contact to www.nuttyengineer.com 
 */
// Fill-in information from your Blynk Template here
int s3=0;
#define BLYNK_TEMPLATE_ID "TMPLohdGyVFO"
#define BLYNK_TEMPLATE_NAME "DUMME"
#define BLYNK_DEVICE_NAME "DUMME"
#define BLYNK_FIRMWARE_VERSION "0.1.0"
#define BLYNK_PRINT Serial
#include "BlynkEdgent.h"
#include<Servo.h>
Servo servo;
Servo servo1;
Servo servo2;

BLYNK_WRITE(V0)
{
  int s0 = param.asInt(); 
  servo.write(s0);
  //Blynk.virtualWrite(V1, s0);
}
BLYNK_WRITE(V1)
{
  int s1 = param.asInt(); 
  servo1.write(s1);
  //Blynk.virtualWrite(V1, s1);
}
BLYNK_WRITE(V2)
{
  int s2 = param.asInt(); 
  servo2.write(s2);
  //Blynk.virtualWrite(V1, s2);
}
BLYNK_WRITE(V3)
{
  int s3 = param.asInt(); 
  //Blynk.virtualWrite(V1, s2);
}
void setup()
{
  Serial.begin(9600);
  servo.attach(32);
  servo1.attach(33);
  servo2.attach(25);  
  BlynkEdgent.begin();
  delay(2000); 
}

void loop() 
{
  int i,j;
  BlynkEdgent.run();
  if(s3==0)
  {
    for(j=0;j<=1;j++)
    {
    //for(i=0;i<=500;i++)
    servo.write(75);
    delay(500);  
    servo.write(90);

    //for(i=0;i<=500;i++)  
    servo1.write(75);
    delay(500);
    servo1.write(90);    

    //for(i=0;i<=500;i++)
    servo2.write(75);
    delay(500);
    servo2.write(90);
    
    //for(i=0;i<=500;i++)
    servo1.write(105);
    delay(500);
    servo1.write(90);

    //for(i=0;i<=500;i++)
    servo2.write(105);
    delay(500);
    servo2.write(90);

    //for(i=0;i<=500;i++)
    servo.write(105);
    delay(500);
    servo.write(90);
    }
  }
}
