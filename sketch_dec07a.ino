#define leftSensor 2       // левый датчик линии
#define rightSensor 4      // правый датчик линии
//===============================================
#define leftMotor 11       //левый мотор
#define rightMotor 10      //правый мотор
//===============================================
void setup() {
  //=============================================
  //определяем пины моторов
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
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
     analogWrite(leftMotor, i);
     analogWrite(rightMotor, i);
     delay(10);
  }
  Serial.println("motors tested!")
}

void loop() {

}
