#include <Servo.h>

// C++ code
//
int tmpPin = A0;
int tmpValue;
double temp;
int redPin = 3;
int greenPin = 5;
int bluePin = 6;
Servo myServo;
int val;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  myServo.attach(9);
  Serial.begin(9600);
}

void loop()
{
  tmpValue = ((analogRead(A0) * (5.0/1024))-0.5)/0.01;
  val = map(tmpValue, -40, 125, 0, 180);
  myServo.write(val);
  Serial.println(tmpValue);
  delay(1000);
  if ((-40 <= tmpValue) && (tmpValue <= -10)){
    rgbSetter(0,0,255); //Blue
  }
  else if ((-10 < tmpValue) && (tmpValue <= 20)){
    rgbSetter(0,255,0); //Green
  }
  else if ((20 < tmpValue) && (tmpValue <= 50)) {
    rgbSetter(255,255,0); //Yellow
  }
  else if ((50 < tmpValue) && (tmpValue <= 80)) {
    rgbSetter(255,0,255); //Purple
  }
  else if ((80 < tmpValue) && (tmpValue <= 110)) {
    rgbSetter(255,0,0); //Red
  }
  else if ((110 < tmpValue) && (tmpValue <= 125)) {
    rgbSetter(255,255,255); //White
  }
}

void rgbSetter(int redValue, int blueValue, int greenValue){
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}