int sensorPin = A0;
int sensorValue;
int brightness = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  Serial.print("Voltage read: ");
  Serial.println(sensorValue);
  brightness = map(sensorValue, 1023, 0, 0, 255);
 analogWrite(13, brightness);
 delay(100);
}
