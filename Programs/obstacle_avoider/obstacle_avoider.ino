void setup() {
  // Configure pin modes
  pinMode(8, INPUT);    // Pin 8 set as input
  pinMode(9, INPUT);    // Pin 9 set as input
  pinMode(10, OUTPUT);  // Pin 10 set as output
  pinMode(11, OUTPUT);  // Pin 11 set as output
  pinMode(12, OUTPUT);  // Pin 12 set as output
  pinMode(13, OUTPUT);  // Pin 13 set as output
}

void loop() {
  if ((digitalRead(9) == LOW) && (digitalRead(8) == HIGH)) {
    digitalWrite(13, HIGH); 
    digitalWrite(12, LOW);  
    digitalWrite(11, LOW);  
    digitalWrite(10, LOW);   
  }

  else if ((digitalRead(8) == LOW) && (digitalRead(9) == HIGH)) {
    digitalWrite(11, HIGH); 
    digitalWrite(10, LOW);  
    digitalWrite(13, LOW);  
    digitalWrite(12, LOW);  
  }

  else if ((digitalRead(8) == LOW) && (digitalRead(9) == LOW)) {
    digitalWrite(13, LOW);  
    digitalWrite(12, LOW);  
    digitalWrite(11, LOW);  
    digitalWrite(10, LOW);  
  }

  else if ((digitalRead(8) == HIGH) && (digitalRead(9) == HIGH)) {
    digitalWrite(13, HIGH); 
    digitalWrite(12, LOW);  
    digitalWrite(11, HIGH); 
    digitalWrite(10, LOW);  
  }
}
