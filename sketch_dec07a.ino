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
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
}
