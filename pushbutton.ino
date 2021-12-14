const int buttonPin = 2;
const int ledPin = 13;
int buttonState = 0;
int count =0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);
if(buttonState == HIGH){
  digitalWrite(ledPin,HIGH);
  count++;
}else {
  digitalWrite(ledPin, LOW);
}
Serial.println(count);
delay(5000);
}
