int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT); // rheostat middle(A0),sides with 5V and GND.
  pinMode(13, OUTPUT); // LED positive(13) with resistor and negative with GND.
}

void loop()
{
  sensorValue = analogRead(A0);
  // turn the LED on
  digitalWrite(13, HIGH);
  delay(sensorValue);
  digitalWrite(13, LOW);
  delay(sensorValue); 
  }
