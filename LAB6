#include <SoftwareSerial.h>

int sensorPin = A0; 

int sensorValue = 0; 

int led = 3;

void setup() { 

pinMode(led, OUTPUT);

Serial.begin(9600); }

void loop()

{

Serial.println("LDR");

sensorValue = analogRead(sensorPin);

Serial.println(sensorValue);

if (sensorValue < 100)

{

Serial.println("LED light on");

digitalWrite(led,HIGH);

delay(1000);

}

digitalWrite(led,LOW);

delay(sensorValue);

}
