String voice;
int
    M11 = 13; // Connect Motor 1 
int M12 = 12; // Connect Motor 1
int M21 = 11; // Connect Motor 2
int M22 = 10; // Connect Motor 2

//--------------------------Motor Control Functions-------------------------------//
void forward()
{
     digitalWrite(M11, HIGH);
     digitalWrite(M12, LOW);
     digitalWrite(M21, HIGH);
     digitalWrite(M22, LOW);
}

void backward()
{
     digitalWrite(M11, LOW);
     digitalWrite(M12, HIGH);
     digitalWrite(M21, LOW);
     digitalWrite(M22, HIGH);
}

void left()
{
     digitalWrite(M11, LOW);
     digitalWrite(M12, LOW);
     digitalWrite(M21, HIGH);
     digitalWrite(M22, LOW);
}

void right()
{
     digitalWrite(M11, HIGH);
     digitalWrite(M12, LOW);
     digitalWrite(M21, LOW);
     digitalWrite(M22, LOW);
}

void stay()
{
     digitalWrite(M11, LOW);
     digitalWrite(M12, LOW);
     digitalWrite(M21, LOW);
     digitalWrite(M22, LOW);
}

//-----------------------------------------------------------------------//
void setup()
{
     Serial.begin(9600);   // Start serial communication
     pinMode(M11, OUTPUT); // Set motor pins as OUTPUT
     pinMode(M12, OUTPUT);
     pinMode(M21, OUTPUT);
     pinMode(M22, OUTPUT);
}

//-----------------------------------------------------------------------//
void loop()
{
     while (Serial.available())
     {                            // Check if there is an available byte to read
          char c = Serial.read(); // Conduct a serial read
          if (c == '#')
          { // Exit the loop when the # is detected
               break;
          }
          voice += c; // Append character to voice string
          delay(10);  // Add a small delay for stability
     }

     if (voice.length() > 0)
     {
          Serial.println(voice); // Print received command for debugging
          //-----------------------------------------------------------------------//
          // Control the motors based on voice command
          if (voice == "*forward")
          {
               forward(); // Move Robot Forward
          }
          else if (voice == "*backward")
          {
               backward(); // Move Robot Backward
          }
          else if (voice == "*left")
          {
               left(); // Move Robot Left
          }
          else if (voice == "*right")
          {
               right(); // Move Robot Right
          }
          else if (voice == "*stop")
          {
               stay(); // Stop Robot
          }
          //-----------------------------------------------------------------------//
          voice = ""; // Reset the voice variable after processing
     }
}