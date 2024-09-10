# Obstacle Avoider

```c
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
  // Check if pin 9 is HIGH and pin 8 is LOW
  if ((digitalRead(9) == HIGH) && (digitalRead(8) == LOW)) {
    digitalWrite(13, LOW);   // Turn OFF pin 13
    digitalWrite(12, LOW);   // Turn OFF pin 12
    digitalWrite(11, HIGH);  // Turn ON pin 11
    digitalWrite(10, LOW);   // Turn OFF pin 10
  }

  // Check if pin 8 is HIGH and pin 9 is LOW
  else if ((digitalRead(8) == HIGH) && (digitalRead(9) == LOW)) {
    digitalWrite(11, LOW);   // Turn OFF pin 11
    digitalWrite(10, LOW);   // Turn OFF pin 10
    digitalWrite(13, HIGH);  // Turn ON pin 13
    digitalWrite(12, LOW);   // Turn OFF pin 12
  }

  // Check if both pin 8 and pin 9 are HIGH
  else if ((digitalRead(8) == HIGH) && (digitalRead(9) == HIGH)) {
    digitalWrite(13, LOW);   // Turn OFF pin 13
    digitalWrite(12, LOW);   // Turn OFF pin 12
    digitalWrite(11, LOW);   // Turn OFF pin 11
    digitalWrite(10, LOW);   // Turn OFF pin 10
  }

  // Check if both pin 8 and pin 9 are LOW
  else if ((digitalRead(8) == LOW) && (digitalRead(9) == LOW)) {
    digitalWrite(13, HIGH);  // Turn ON pin 13
    digitalWrite(12, LOW);   // Turn OFF pin 12
    digitalWrite(11, HIGH);  // Turn ON pin 11
    digitalWrite(10, LOW);   // Turn OFF pin 10
  }
}

```

---
