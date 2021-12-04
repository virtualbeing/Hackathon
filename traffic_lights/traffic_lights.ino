#include <Servo.h>
Servo myservo;
int pos = 20;
int microaccess = 9;
int stationLed = 3;
int redLed = 8;
int yellowLed = 6;
int trigPin = 10;
int echoPin = 9;
int buzzer = 5;

long duration;
float distance;

void setup() {
myservo.attach(11);
pinMode(microaccess, OUTPUT);
pinMode(stationLed, OUTPUT);
pinMode(redLed, OUTPUT);
pinMode(yellowLed, OUTPUT); 
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);  
myservo.write(pos);// put your setup code here, to run once:

}

void loop(){ 
digitalWrite(microaccess, LOW);
delay(5000);
digitalWrite(microaccess, HIGH);
delay(5000);
digitalWrite(trigPin, LOW);
delay(2000);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration=pulseIn(echoPin, HIGH);
distance = 0.034*(duration/2);

if (distance <4)
{
 digitalWrite(redLed, HIGH);
 delay(2000);
 digitalWrite(redLed, LOW);
 delay(6000);
 digitalWrite(yellowLed, HIGH);
 delay(4000);
 digitalWrite(yellowLed, LOW);
 delay(5000);
 myservo.write(pos+90);
 
 
 digitalWrite(stationLed, HIGH);
 delay(5000);
 digitalWrite(stationLed, LOW);
 delay(5000);

}
  
  
  
  // put your main code here, to run repeatedly:
}
