int bluePin = 13; //variable naming which number the led is pinned to on arduino
int redPin = 12;
int greenPin = 8;
int bluePin2 = 7;
//int redPin2 = 4;
//int greenPin2 = 2;
//
//int pinArray[6]={13, 12, 8, 7, 4, 2};
//int i = 0;
//int timer = 100;

void setup(){
//for (i=0; i<6; i++) {
//    pinMode(pinArray[i], OUTPUT);
//  }
  pinMode(bluePin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin2, OUTPUT);
//  pinMode(redPin2, OUTPUT);
//  pinMode(greenPin2, OUTPUT);
}

void loop(){
// for (i=0;i<6;i++) {
//   digitalWrite(pinArray[i], HIGH);
//   delay(timer);
//   digitalWrite(pinArray[i], LOW);
//   delay(timer);
//  }
//  for (i=5; i>=0; i--) {
//    digitalWrite(pinArray[i], HIGH);
//   delay(timer);
//   digitalWrite(pinArray[i], LOW);
//   delay(timer);
//  }
  digitalWrite(bluePin, HIGH); //HIGH = 1, LOW = 0, for power on/off
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin2, HIGH);
//  delay(100);
//  digitalWrite(bluePin, LOW);
//  digitalWrite(redPin, LOW);
//  digitalWrite(greenPin, LOW);
//  digitalWrite(bluePin2, LOW);
//  delay(100);
}
