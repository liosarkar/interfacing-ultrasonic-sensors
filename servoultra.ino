#include <Servo.h> 
Servo servo1;
int i=0,j=0;        // veriable declaration 
float d1,d2,d3,d4;
void setup()
{
 Serial.begin(9600);
 servo1.attach(13);
 pinMode(12,OUTPUT);
 pinMode(11,INPUT);
 pinMode(10,OUTPUT);
 pinMode(9,INPUT);
 pinMode(8,OUTPUT);
 pinMode(7,INPUT);
// pinMode(33,OUTPUT);
// pinMode(34,INPUT);
}

void loop() 
{
  sensor1();
  servo1.write(0); // intial postion or 0 degree 
  if(d1>=6)
   {
   servo1.write(0);
     delay(1000);
   }
  Serial.println(d1); // print value sersor 1 
   sensor2();
  if(d2>=6)
   {
    servo1.write(90); // turn servo towards 90 degree 
    delay(1000);
    servo1.write(0);// intial postion or 0 degree 
   Serial.println(d2);
   }
    sensor3();
   if(d3>=6)
   {
    servo1.write(180); // turn servo towards 180 degree 
    delay(1000);
    servo1.write(0);// intial postion or 0 degree 
   Serial.println(d3);
   }
/*     sensor4();
   if(6<d2<80)
   {
    servo1.write(270); // turn servo towards 270 degree
    delay(2000);
    servo1.write(0); // intial postion or 0 degree 
   }
  */
  }
  //sensor1 ultrasonic code 
 void sensor1() 
{
 digitalWrite(12,LOW);
 delayMicroseconds(10);
 digitalWrite(12,HIGH);
 delayMicroseconds(10);
 digitalWrite(12,LOW);
 delayMicroseconds(10);
 j=pulseIn(11,HIGH);
 Serial.println("distance");
 d1=j*(0.0343/2);
 Serial.println("d1");
  
} 
 void sensor2() 
{

 digitalWrite(10,LOW);
 delayMicroseconds(10);
 digitalWrite(10,HIGH);
 delayMicroseconds(10);
 digitalWrite(10,LOW);
 delayMicroseconds(10);
 j=pulseIn(9,HIGH);
 Serial.println("distance");
 d2=j*(0.0343/2);
 Serial.println("d2");
} 
 void sensor3() 
{

 digitalWrite(8,LOW);
 delayMicroseconds(10);
 digitalWrite(8,HIGH);
 delayMicroseconds(10);
 digitalWrite(8,LOW);
 delayMicroseconds(10);
 j=pulseIn(7,HIGH);
 Serial.println("distance");
 d3=j*(0.0343/2);
 Serial.println("d3");
} 
/* void sensor4() 
{

 digitalWrite(D7,LOW);
 delayMicroseconds(10);
 digitalWrite(D7,HIGH);
 delayMicroseconds(10);
 digitalWrite(D7,LOW);
 delayMicroseconds(10);
 j=pulseIn(D8,HIGH);
 Serial.println("distance");
 d4=j*(0.0343/2);
 Serial.println(d4);
} 
 */
