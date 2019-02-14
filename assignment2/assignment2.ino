int pinArray[4]={13, 12, 4, 2};
int i = 0;
int timer = 100;

void setup(){
for (i=0; i<4; i++) {
    pinMode(pinArray[i], OUTPUT);
  }
}

void loop(){
 for (i=0;i<4;i++) {
   digitalWrite(pinArray[i], HIGH);
//   delay(timer);
//   digitalWrite(pinArray[i], LOW);
//   delay(timer);
  }
//  for (i=5; i>=0; i--) {
//    digitalWrite(pinArray[i], HIGH);
//   delay(timer);
//   digitalWrite(pinArray[i], LOW);
//   delay(timer);
//  }
}
