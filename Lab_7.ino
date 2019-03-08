const int PWMA = 5;
const int AIN1 = 2;
const int AIN2 = 4;
const int STBY = 3;
const int PWMB = 6;
const int BIN2 = 8;
const int BIN1 = 7;


void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
  digitalWrite (AIN2, LOW);
  digitalWrite (AIN1, HIGH);
  digitalWrite (STBY, HIGH);
  digitalWrite (BIN1, HIGH);
  digitalWrite (BIN2, LOW);
  analogWrite (PWMA, 175);
  analogWrite (PWMB, 150);
}
void loop() {
  // put your main code here, to run repeatedly:
float leftSensorValue = analogRead(A0)/1024.0*5;
  float rightSensorValue = analogRead(A1)/1024.0*5;
  Serial.print(leftSensorValue);
  Serial.print("\t");
  Serial.println(rightSensorValue);
  if  (leftSensorValue < 4.5 and rightSensorValue < 4.5) {
    digitalWrite (AIN2, LOW);
    digitalWrite (AIN1, HIGH);
    digitalWrite (STBY, HIGH);
    digitalWrite (BIN1, HIGH);
    digitalWrite (BIN2, LOW);
    analogWrite (PWMA, 100);
    analogWrite (PWMB, 80); }
   else if (rightSensorValue > 4.7 and leftSensorValue > 4.65) {
    digitalWrite (AIN2, LOW);
    digitalWrite (AIN1, HIGH);
    digitalWrite (STBY, HIGH);
    digitalWrite (BIN1, LOW);
    digitalWrite (BIN2, HIGH);
    analogWrite (PWMA, 200);
    analogWrite (PWMB, 180);
    delay(900); }
   else if (leftSensorValue > 4.5) {
    digitalWrite (AIN2, LOW);
    digitalWrite (AIN1, HIGH);
    digitalWrite (STBY, HIGH);
    digitalWrite (BIN1, HIGH);
    digitalWrite (BIN2, LOW);
    analogWrite (PWMA, 220);
    analogWrite (PWMB, 80); }
  else if (rightSensorValue > 4.5) {
    digitalWrite (AIN2, LOW);
    digitalWrite (AIN1, HIGH);
    digitalWrite (STBY, HIGH);
    digitalWrite (BIN1, HIGH);
    digitalWrite (BIN2, LOW);
    analogWrite (PWMA, 80);
    analogWrite (PWMB, 220); }
  else {
    digitalWrite (AIN2, LOW);
    digitalWrite (AIN1, HIGH);
    digitalWrite (STBY, HIGH);
    digitalWrite (BIN1, HIGH);
    digitalWrite (BIN2, LOW);
    analogWrite (PWMA, 100);
    analogWrite (PWMB, 80); }
  }
