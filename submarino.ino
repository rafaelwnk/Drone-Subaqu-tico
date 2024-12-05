const int ena = 3;
const int in1 = 4;
const int in2 = 5;
const int enb = 6;
const int in3 = 7;
const int in4 = 8;


void setup() {
    Serial.begin(9600);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(ena, 255);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(enb, 255);
}

void loop() {
    if (Serial.available()) {
        char command = Serial.read();
        if (command == 'w') {
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
        }
        if (command == 's') {
            digitalWrite(in3, HIGH);
            digitalWrite(in2, LOW);
        }
  }
}