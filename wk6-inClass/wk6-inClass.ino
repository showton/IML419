int pinArray[3]={13, 12, 4};
int i = 0;
int timer = 100;
int potPin = A0;
int sensVal = 0;

void setup(){
for (i=0; i<3; i++) {
    pinMode(pinArray[i], OUTPUT);
  }
}

void loop(){
 for (i=0;i<3;i++) {
   digitalWrite(pinArray[i], HIGH);
   sensVal = analogRead(potPin);
   delay(sensVal);
  }
  for (i=3;i<0;i--) {
   digitalWrite(pinArray[i], LOW);
   sensVal = analogRead(potPin);
   delay(sensVal);
  }
}
