int pinArray[3]={13, 12, 4};
int i = 0;
int timer = 100;

void setup(){
for (i=0; i<3; i++) {
    pinMode(pinArray[i], OUTPUT);
  }
}

void loop(){
 for (i=0;i<3;i++) {
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
