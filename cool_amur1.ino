int sensorPin =A0;
int sensorValue = 0; 
int buttonState1=0;
int buttonState2=0;
int buttonState3=0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
     
}

void loop()
{
   sensorValue = analogRead(A0);
  Serial.println(200);
  if(sensorValue>200)
   {
 buttonState1=digitalRead(2);
 
  if(buttonState1 == HIGH)
  {
    digitalWrite(4,HIGH);
  }
  
  buttonState2=digitalRead(3);
  if(buttonState2 == HIGH)
  {
    digitalWrite(4,HIGH);
  }
    
    if(buttonState1 == HIGH && buttonState2 == HIGH)
    {
      digitalWrite(5,HIGH);
    }
   }
  else{
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
  
}