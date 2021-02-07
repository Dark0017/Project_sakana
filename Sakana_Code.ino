int waterSensVal = 0;
int waterSensPin = A5;
int outValve = 7; // pin that controls the solenoid valve relay

//TODO: Add time module to trigger relay for lights


void setup() {
  Serial.begin(9600);
}

void loop() {

  waterSensVal = analogRead(waterSensPin);
  
  //print water sensor values 
  Serial.print(waterSensVal);
  Serial.print('\t');

  if(waterSensVal < 500) //water level low
  {
    digitalWrite(outValve, HIGH);
  }

  else if(waterSensVal > 500) 
  {
    digitalWrite(outValve, LOW);
  }

}
