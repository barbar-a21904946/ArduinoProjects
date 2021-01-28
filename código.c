// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  
}

// the loop function runs over and over again forever
void loop() {
digitalWrite(10,HIGH);
delay(100);
digitalWrite(10,LOW);
delay(100);
digitalWrite(9,HIGH);
delay(100);
digitalWrite(9,LOW);
delay(100);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(100);
}
