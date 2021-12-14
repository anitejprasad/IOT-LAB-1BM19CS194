int light_sensitivity=100;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
 pinMode(A0,INPUT);
 pinMode(11,OUTPUT);
  
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int LDR_value=analogRead(A0);
  Serial.println(LDR_value);
  delay(100);
  if(LDR_value<light_sensitivity)
     digitalWrite(11,HIGH);
  else
     digitalWrite(11,LOW);
  delay(1000);

}
