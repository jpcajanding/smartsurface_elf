void setup() {
  analogWriteResolution(8);
}

void loop() {
 \\do four loops of 2.5V and 0 to ensure that 2 pins will be triggered 
  analogWrite(DAC0,0);
  analogWrite(DAC0,228);
  analogWrite(DAC0,0);
  analogWrite(DAC0,228);
  analogWrite(DAC0,0);
  analogWrite(DAC0,228);
  analogWrite(DAC0,0);
  analogWrite(DAC0,228);
  analogWrite(DAC0,0);
  
  analogWrite(DAC1,0);
  analogWrite(DAC1,228);
  analogWrite(DAC1,0);
  analogWrite(DAC1,228);
  analogWrite(DAC1,0);
  analogWrite(DAC1,228);
  analogWrite(DAC1,0);
  analogWrite(DAC1,228);
  analogWrite(DAC1,0);

  delay (1000);
  
  analogWrite(DAC0,228);
  analogWrite(DAC1,228);
  delay (59000);
}



