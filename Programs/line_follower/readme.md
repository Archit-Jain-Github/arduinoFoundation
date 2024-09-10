# Line Follower

```c
void setup()
{
    // Set pin modes
    pinMode(11, OUTPUT); // Motor control pin
    pinMode(8, INPUT);   // Sensor/input pin
    pinMode(9, INPUT);   // Sensor/input pin
    pinMode(10, OUTPUT); // Motor control pin
    pinMode(12, OUTPUT); // Motor control pin
    pinMode(13, OUTPUT); // Motor control pin
}

void loop()
{
    // Check if pin 8 is HIGH (sensor/input triggered)
    if (digitalRead(8))
    {
        digitalWrite(13, HIGH); // Turn on the output on pin 13
        digitalWrite(12, LOW);  // Ensure pin 12 is LOW
    }
    else
    {
        digitalWrite(13, LOW); // Turn off the output on pin 13
        digitalWrite(12, LOW); // Ensure pin 12 remains LOW
    }

    // Check if pin 9 is HIGH (sensor/input triggered)
    if (digitalRead(9))
    {
        digitalWrite(11, HIGH); // Turn on the output on pin 11
        digitalWrite(10, LOW);  // Ensure pin 10 is LOW
    }
    else
    {
        digitalWrite(11, LOW); // Turn off the output on pin 11
        digitalWrite(10, LOW); // Ensure pin 10 remains LOW
    }
}
```

---
