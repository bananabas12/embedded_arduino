int led1 = 2;

void setup() {
pinMode(led1, OUTPUT);

}
void loop() {

LedDelay05Sec();
LedDelay05Sec();
LedDelay05Sec();


LedDelay1Sec();
LedDelay1Sec();
LedDelay1Sec();


LedDelay05Sec();
LedDelay05Sec();
LedDelay05Sec();
delay(1000);
}
void LedDelay1Sec()
{
digitalWrite(led1, 1);
delay(1000);
digitalWrite(led1, 0);
delay(1000);
}
void LedDelay05Sec()
{
digitalWrite(led1, 1);
delay(500);
digitalWrite(led1, 0);
delay(500);
}
