const int sensorPin = A0;
const int ledRed = 9;
const int ledGreen = 8;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  float voltage = sensorValue * 5.0 / 1023.0;
  float temperatureC = (voltage - 0.5) * 100;

  if (temperatureC > 30) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);
  } else {
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
  }

  delay(1000);
}
