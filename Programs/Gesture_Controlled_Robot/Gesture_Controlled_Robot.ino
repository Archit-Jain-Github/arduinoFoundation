String voice;
int 
M11 = 13, //Connect Motor 1 Blue wire To Pin #13 
M12 = 12, //Connect Motor 1 Violet wire To Pin #12 
M21 = 11, //Connect Motor 2 Blue wire To Pin #11
M22 = 10; //Connect Motor 2 Violet wire To Pin #10 

//--------------------------Call A Function-------------------------------//
void forward() {
     digitalWrite(M11, HIGH);
     digitalWrite(M12, LOW); 
     digitalWrite(M21, HIGH);
     digitalWrite(M22, LOW); 
     }
     
void backward(){
     digitalWrite(M11, LOW);
     digitalWrite(M12, HIGH); 
     digitalWrite(M21, LOW);
     digitalWrite(M22, HIGH); 
     
}
void left(){
     digitalWrite(M11, LOW);
     digitalWrite(M12, LOW); 
     digitalWrite(M21, HIGH);
     digitalWrite(M22, LOW); 
     }
void right(){
     digitalWrite(M11, HIGH);
     digitalWrite(M12, LOW); 
     digitalWrite(M21, LOW);
     digitalWrite(M22, LOW); 
     }
void stay(){
     digitalWrite(M11, LOW);
     digitalWrite(M12, LOW); 
     digitalWrite(M21, LOW);
     digitalWrite(M22, LOW); 
     }

//-----------------------------------------------------------------------//  
 void setup() {
  Serial.begin(9600);
  pinMode(M11, OUTPUT); 
  pinMode(M12, OUTPUT); 
  pinMode(M21, OUTPUT); 
  pinMode(M22, OUTPUT); 
 
}
//-----------------------------------------------------------------------//  
 void loop() {
  while (Serial.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable 
  char c = Serial.read(); //Conduct a serial read
  if (c == '#') {break;} //Exit the loop when the # is detected after the word
  voice += c; //Shorthand for voice = voice + c
  }  
  if (voice.length() > 0) {
    Serial.println(voice); 
//-----------------------------------------------------------------------//    
  //----------Control Multiple Pins/ LEDs----------//  
       if(voice == "*forward") {forward();}  //Move Robot Forward (Call Function)
  else if(voice == "*backward"){backward();} //Move Robot Backward (Call Function)
  else if(voice == "*left"){left();} //Move Robot Left (Call Function)
  else if(voice == "*right"){right();} //Move Robot right (Call Function)
  else if(voice == "*stop"){stay();} //Stop Robot (Call Function)
  
 
//-----------------------------------------------------------------------//  
voice="";}} //Reset the variable after initiating
