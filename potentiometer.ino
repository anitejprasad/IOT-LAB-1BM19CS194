const int analogPin = A0;
const int analogOutPin=11;
int sensorValue =0;
int outputValue =0;

void setup() {
  
Serial.begin(9600);

}

void loop() {
  
sensorValue = analogRead(analogPin);
outputValue = map(sensorValue,0,1023,0,255);
analogWrite(analogOutPin, outputValue);
Serial.print("SensorValue");
Serial.println(sensorValue);
Serial.print("OutputValue");
Serial.println(outputValue);
delay(2000);
}
