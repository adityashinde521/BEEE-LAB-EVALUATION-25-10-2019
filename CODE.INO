int sensorPin = A5; 
int sensorValue = 0; 
void setup()
{
  pinMode(7,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600); 
}

void loop()
{
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  int i =2;
    while(i<=6)
  {
  if(sensorValue<500)
  {
  digitalWrite(i, HIGH);
  delay(1000/i); 
  digitalWrite(i, LOW);
  delay(1000/i); 
    
 }
      i++;
  }
}
