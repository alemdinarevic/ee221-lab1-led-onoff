int led = 13; // Pin 13
 
  void setup()
  {
      pinMode(led, OUTPUT); // Set pin 13 as digital out
 
     // Start up serial connection
   Serial.begin(9600); // baud rate
     Serial.flush();
 }
 
//simultaneous on off
// void loop()
// {
//      char input;
//  // Read any serial input
//      while (Serial.available() > 0)
//      {
//          input = Serial.read(); // Read in one char at a time
//          if (input == '1')
//             digitalWrite(led, HIGH); // on
//          if (input == '0')
//             digitalWrite(led, LOW); // off
//      }
    
// }

//simultaneous on off in a different way
void loop()
{
 digitalWrite(led, HIGH);
 delay(1000);
 digitalWrite(led, LOW);
 delay(1000);
}