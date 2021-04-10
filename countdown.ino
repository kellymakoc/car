int pin1 = 2;
int pin2 = 3;                                    //                            --6--
int pin3 = 4;                                    //                         5 |     | 7
int pin4 = 5;                                    //                           |--4--|
int pin5 = 6;                                    //                         1 |     | 3
int pin6 = 7;                                    //                            --2--
int pin7 = 8;
int gnd1 = 11;                                 //                          gnd1 is display 1's gnd                                  //                          gnd2 is display 2's gnd
int timer = 500;                               //   A timer, to run the for loop 500 times, which turns out as 1 second.
int value;                                        //   The value, part of the FADING display

void setup(){
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);           //The following sets up all of the pins for use.
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(gnd1, OUTPUT);
  
  
 for (int i=0; i<timer; i++)
 {                                 //          Writes 3 to the display.
   digitalWrite(pin1, LOW);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, HIGH);
   digitalWrite(pin5, LOW);
   digitalWrite(pin6, LOW);
   digitalWrite(pin7, HIGH);
   digitalWrite(gnd1, HIGH);
   delay(500);
   
  }
  for (int i=0; i<timer; i++)
  {                        //          Writes 2 to the display.
   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, HIGH);
   digitalWrite(pin5, LOW);
   digitalWrite(pin6, HIGH);
   digitalWrite(pin7, HIGH);
   digitalWrite(gnd1, HIGH);
   delay(500);
   
  }
  for (int i=0; i<timer; i++)
  {                                       //          Writes 1 to the display.
   digitalWrite(pin1, LOW);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);
   digitalWrite(pin5, LOW);
   digitalWrite(pin6, LOW);
   digitalWrite(pin7, HIGH);
   digitalWrite(gnd1, HIGH);
   delay(500);
   
  }
  for (int i=0; i<timer; i++)
  {                                      //          Writes 0 to the display.
   digitalWrite(pin1, HIGH);
   digitalWrite(pin2, HIGH);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);
   digitalWrite(pin5, HIGH);
   digitalWrite(pin6, HIGH);
   digitalWrite(pin7, HIGH);
   digitalWrite(gnd1, HIGH);
   delay(500);
   
  }
  
  
}

void loop() {
  digitalWrite(13, HIGH);   //  Turns the TIMER ENDED LED on.
  
   for(value = 0 ; value <= 255; value+=5) // fade in (from min to max) 
  { 
    analogWrite(gnd1, value);           // sets the value (range from 0 to 255) 
    
    delay(10);                            // waits for 30 milli seconds to see the dimming effect 
  } 
  for(value = 255; value >=0; value-=5)   // fade out (from max to min) 
  { 
    analogWrite(gnd1, value);           // sets the value (range from 0 to 255) 
    delay(10); 
  }  
  
}
