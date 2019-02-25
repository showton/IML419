int pinArray[5]={13, 12, 7, 4, 2};
//int timer = 100;
int phoCel = A0;
int i = 0;
int sensVal = 0;



void setup(){
for (i=0; i<5; i++) {
    pinMode(pinArray[i], OUTPUT);
  }
}

void loop(){
sensVal = analogRead(phoCel);
 for (i=0;i<5;i++) {
   digitalWrite(pinArray[i], HIGH);
   delay(sensVal);
  }
  
  for (i=4;i>=0;i--) {
   digitalWrite(pinArray[i], LOW);
   delay(sensVal);
  }
}
