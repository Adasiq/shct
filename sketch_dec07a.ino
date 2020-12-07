#define leftSensor 2       // левый датчик линии
#define rightSensor 4      // правый датчик линии


void setup() {
  // кривое определение мотора, но да пофик, я пагамист и я так вижу
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  //===========================================
  //определяем пины для сенсоров линии
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
}
