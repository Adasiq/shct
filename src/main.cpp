#include <Arduino.h>
#define leftSensor 2       // левый датчик линии
#define rightSensor 4      // правый датчик линии
//===============================================
#define leftMotor1 11       //левый мотор
#define rightMotor1 10      //правый мотор

#define rightMotor2 9       //левый мотор
#define leftMotor2 6
//===============================================
void setup() {
  //=============================================
  //определяем пины моторов
  pinMode(leftMotor1, OUTPUT);
  pinMode(rightMotor1, OUTPUT);
  pinMode(leftMotor2, OUTPUT);
  pinMode(rightMotor2, OUTPUT);
  //=============================================
  //определяем пины для сенсоров линии
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
  //=============================================
  //индикация загрузки
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  // моргаем 10 раз встроенным светодиодом
  for (size_t i = 0; i < 10; i++) {
     digitalWrite(13, HIGH);
     delay(100);
     digitalWrite(13, LOW);
     delay(100);
  }
  //проверяем все датчики
  Serial.println("ezLineRobot ready to test");
  //проверяем левый датчик
  int leftTest = digitalRead(leftSensor);
  Serial.print("left line sensor: ");
  Serial.println(leftTest);
  //проверяем правый датчик
  int rightTest = digitalRead(rightSensor);
  Serial.print("right line sensor: ");
  Serial.println(rightTest);
  //=============================================
  //проверка моторов
  //=============================================
  Serial.println("motors testing...");
  for (size_t i = 0; i < 255; i++) {
     analogWrite(leftMotor1, i);
     analogWrite(rightMotor1, i);
     delay(10);
  }

     for (size_t i = 255; i >1; i--) {
   analogWrite(leftMotor1, i);
   analogWrite(rightMotor1, i);
   delay(10);
   }
  Serial.println("motors tested!");
}

void loop() {

}
