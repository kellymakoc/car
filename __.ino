 /* Program Name: Car driving on the track
 *  Author: Kelly Mak
 *  Date: Decemeber 9, 2019
 *  Description: the 7 segment display will turn on and countdown. Then, the motor will 
 *  drive on the track with the lights turing on and off depedns on the car movement.
 */
//define pins with the loads 
const int sled1 = 2; //define pin2 with right signal light 
const int sled2 = 3; // define pin3 with left signal light 
const int bled3 = 4; // define pin4 with right brake light 
const int bled4 = 5; // define pin5 with left brake light 
const int pin1 = 6;// define motor 
const int pin2 = 7; //define motor 
const int pin3 = 8; // define motor 
const int pin4 = 9; // define motor 
const int a = 37; //define pin A1 with a in 7 segment display 
const int b = 35; // define pin A2 with b in 7 segment display 
const int c = 33; // define pin A3 with c in 7 segment display 
const int d = 31; // define pin A4 with d in 7 segment display 
const int e = 29; //define pin A5 with e in 7 segment display 
const int f = 27; // define pin A6 with f in 7 segment display 
const int g = 25; // define pin A7 with g in 7 segment display 
const int gnd = 23; // define pin A0 with gnd in 7 segment display 
const int q = A0;
const int w = A1;
const int r = A2;
const int t = A3;

/* Function Name: Setup 
 * Purpose: Run once when the system powers up. 
 */
void setup() {
  Serial.begin(9600);
  Serial.println("Enter 1 to move forward, 2 to move backwards, 3 to turn left, 4 to turn right and 0 to stop.");
  //state instruction 
  Serial.println("Input: ");
  //define pins as output
  pinMode(2, OUTPUT);// define 2 as output 
  pinMode(3, OUTPUT);// define 3 as output 
  pinMode(4, OUTPUT);// define 4 as output 
  pinMode(5, OUTPUT); // define 5 as output 
  pinMode(6, OUTPUT);// define 6 as output 
  pinMode(7, OUTPUT);// define 7 as output 
  pinMode(8, OUTPUT);// define 8 as output 
  pinMode(9, OUTPUT);// define 9 as output 
  pinMode(a, OUTPUT);// define a as output 
  pinMode(b, OUTPUT);// define b as output 
  pinMode(c, OUTPUT);// define c as output 
  pinMode(d, OUTPUT);// define d as output 
  pinMode(e, OUTPUT);// define e as output 
  pinMode(f, OUTPUT);// define f as output 
  pinMode(g, OUTPUT);// define g as output 
  pinMode(gnd, OUTPUT);// define gnd as output 
  pinMode(q, OUTPUT);
  pinMode(w, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(t, OUTPUT);

}
/*
 * Function name: loop
 * Purpose: Runs over and over again, as long as the Arduino has power
 */

void loop() {
    if (Serial.available() > 0){
      int input =  Serial.read(); //input value 
      switch(input){
        case '7': // turn on 7 segment countdown 
        // turns on 3 
         digitalWrite(a, HIGH);  // set a on
         digitalWrite(b, HIGH); // set b on
         digitalWrite(c, HIGH);// set c on
         digitalWrite(d, HIGH);// set d on
         digitalWrite(e, LOW);// set e off
         digitalWrite(f, LOW);// set f off
         digitalWrite(g, HIGH);// set g on
         digitalWrite(gnd, HIGH);// set gnd on
         delay(1000);// set it on for one second 
      
         
      //Writes 2 to the display.
         digitalWrite(a, HIGH); // set a on
         digitalWrite(b, HIGH); // set b on 
         digitalWrite(c, LOW); // set c off
         digitalWrite(d, HIGH); // set d on 
         digitalWrite(e, HIGH); // set e on 
         digitalWrite(f, LOW); // set f off
         digitalWrite(g, HIGH); // set g on 
         digitalWrite(gnd, HIGH); // set gnd on 
         delay(1000); // set it on for one second 
      
      
      //          Writes 1 to the display.
         digitalWrite(a, LOW); // set a off 
         digitalWrite(b, HIGH); // set b on 
         digitalWrite(c, HIGH); // set c on 
         digitalWrite(d, LOW); // set d off
         digitalWrite(e, LOW); // set e off 
         digitalWrite(f, LOW); // set f off 
         digitalWrite(g, LOW); // set g off 
         digitalWrite(gnd, HIGH); // set gnd on 
         delay(1000); //set it on for one second 
      
         
      //          Writes 0 to the display.
         digitalWrite(a, HIGH); // set a on 
         digitalWrite(b, HIGH); // set b on 
         digitalWrite(c, HIGH); // set c on 
         digitalWrite(d, HIGH); // set d on 
         digitalWrite(e, HIGH); // set e on 
         digitalWrite(f, HIGH); //set f on 
         digitalWrite(g, LOW); // set g off 
         digitalWrite(gnd, HIGH); // set gnd on 
         delay(1000); // set it on for one second 
      
         digitalWrite(a, LOW); //set a off 
         digitalWrite(b, LOW); // set b off 
         digitalWrite(c, LOW); // set c off 
         digitalWrite(d, LOW); // set d off 
         digitalWrite(e, LOW); // set e off 
         digitalWrite(f, LOW); // set f off
         digitalWrite(g, LOW); // set g off 
         digitalWrite(gnd, HIGH); // set gnd on 
         delay(1000); // set it on for one second 

         digitalWrite(bled3, HIGH);// set right brake light on
         delay(1000);
         digitalWrite(bled3, LOW);
         break; // execute case 7 
   
        case '1': // motor going forward
         Serial.println("1, forward"); // state instruction
         digitalWrite(sled1, LOW);
         digitalWrite(sled2,LOW);
         digitalWrite(bled3, LOW); 
          digitalWrite(6, HIGH); // set 6 on 
          digitalWrite(7, LOW); // set 7 off 
          digitalWrite(bled4, HIGH); // set 8 on 
          digitalWrite(9, LOW); // set 9 off 
          digitalWrite(q,HIGH); // set off
          digitalWrite(w,LOW); // set off
          digitalWrite(r,HIGH); // set off 
          digitalWrite(t, LOW); // set on 
          break; //execute case 1 
          
          case '2': // turning right forward 
        Serial.println("2, turn right"); // state instruction 
          digitalWrite(sled1, HIGH); //set right signal light on 
          delay(500); // set it on for half a second 
          digitalWrite(sled1, LOW); // set right signal light off 
          delay(500); // set it off for half a second 
          digitalWrite(sled1, HIGH); // set right signal light on 
          delay(500); // set it on for half a second 
          digitalWrite(sled1, LOW); // set right signla light off
          delay(500); // set it off for half a second 
           digitalWrite(bled3, LOW);
          digitalWrite(6, HIGH); // set 6 off
          digitalWrite(7, LOW); // set 7 off
          digitalWrite(bled4, LOW); // set 8 on 
          digitalWrite(9, HIGH); // set 9 off
          digitalWrite(sled1, HIGH); // set right signal light on 
          delay(500); // set it on for half a second 
          digitalWrite(sled1, LOW); // set right signal light off 
          delay(500); // set it off for half a second 
          
          break; //execute case 2
          
          case '3': // turn left forward  
        Serial.println("3, turn left"); // state instruction
         digitalWrite(sled2, HIGH); // set left signal light on 
         delay(500); // set it on for half a second 
         digitalWrite(sled2, LOW); // set left signal light off 
         delay(500);// set it off for half a second 
         
         digitalWrite(6, LOW); // set 6 on 
         digitalWrite(7, HIGH); // set 7 off
         digitalWrite(bled4, HIGH); // set 8 off
         digitalWrite(9, LOW); // set 9 off 
          digitalWrite(bled3, LOW);
         digitalWrite(sled2, HIGH); // set left signal light on 
         delay(500); // set it on for half a second 
         digitalWrite(sled2, LOW); // set left signal light off 
         delay(500); // set it off for half a second 
         break; // execute case 3 
         
         case '4': // backwards
          Serial.println("4, reverse"); // state instruction
           digitalWrite(sled1, LOW);
         digitalWrite(sled2,LOW);
         digitalWrite(bled3, LOW);
          digitalWrite(6, LOW); // set 6 off 
          digitalWrite(7, HIGH); // set 7 on 
          digitalWrite(bled4, LOW); // set 8 off 
          digitalWrite(9, HIGH); // set 9 on 
          break; //execute case 4 
          
          case '5': // turn right backwards 
        Serial.println("5, reverse right"); // state instruction 
         digitalWrite(bled3, LOW);
          digitalWrite(sled1, HIGH); // set right signal light on 
          delay(500); // set it on for half a second 
          digitalWrite(sled1, LOW); // set right signal light off 
          delay(500); // set it off for half a second 
          digitalWrite(sled1, HIGH); // set right signal light on 
          delay(500); // set it off for half a second 
          digitalWrite(sled1, LOW); // set right signal light off
          delay(500); //set it off for half a second
        
          digitalWrite(6, HIGH); // set 6 off
          digitalWrite(7, LOW); // set 7 off
          digitalWrite(bled4, LOW); // set 8 off 
          digitalWrite(9, LOW); // set 9 on 
          digitalWrite(sled1, HIGH); //set red signal light on 
          delay(500); // set it on for half a second 
          digitalWrite(sled1, LOW); // set red signal light off 
          delay(500); //set it off for half a second 
        break; //execute case 5

        case '6': //turn left backwards 
        Serial.println("6, reverse left"); // state instruction 
          digitalWrite(sled2, LOW); // set left signal light on 
          delay(500); // set it on for half a second 
          digitalWrite(sled2, HIGH); // set left signal light off 
          delay(500); // set it off for half a second 
          digitalWrite(sled2, LOW); // set left signal light on 
          delay(500); // set it on for half a second 
          digitalWrite(sled2, HIGH); // set left signal light off 
          delay(500); // set it off for half a second 
        
          digitalWrite(6, LOW); // set 6 off 
          digitalWrite(7, HIGH); // set 7 on
          digitalWrite(bled4, LOW); // set 8 off
          digitalWrite(9, LOW); // set 9 off 
          
          digitalWrite(sled2, HIGH); // set left signal light on 
          delay(500); // set it on for half a second 
          digitalWrite(sled2, LOW); // set left signal light off 
          delay(500); // set it off for half a second 
        break; // execute case 6

          case '0': // stop 
          Serial.println("0, stop"); // state instruction 
          digitalWrite(sled1, LOW); //set right signal light off 
          digitalWrite(sled2, LOW); //set left signal light off
          digitalWrite(bled3, HIGH);//set right brake light on 
          digitalWrite(6, LOW);//set 6 off 
          digitalWrite(7, LOW);//set 7 off
          digitalWrite(bled4, LOW);//set 8 off 
          digitalWrite(9, LOW);//set 9 off 
          digitalWrite(q, LOW); // set q off 
          digitalWrite(w, LOW); //set w off 
          digitalWrite(r, LOW); // set r off 
          digitalWrite(t, LOW); // set t off
          break;// execute case 0 

          case '8':// reverse
          Serial.println("8, reverse"); // state instruction
          digitalWrite(sled1, LOW); //set right signal light off 
          digitalWrite(sled2, LOW); //set left signal light off
          digitalWrite(bled3, HIGH);//set right brake light on 
          delay(2000);
          digitalWrite(q,LOW);// set off 
          digitalWrite(w,HIGH); // set on 
          digitalWrite(r,LOW); // set off 
          digitalWrite(t, HIGH); // set on
          break;

          case '9': // reversing left 
          Serial.println("9, reversing left"); // state instruction 
          digitalWrite(sled2, LOW); // set left signal light on 
          delay(500); // set it on for half a second 
          digitalWrite(sled2, HIGH); // set left signal light off 
          delay(500); // set it off for half a second 
          digitalWrite(sled2, LOW); // set left signal light on 
          delay(500); // set it on for half a second 
          digitalWrite(sled2, HIGH); // set left signal light off 
          delay(500); // set it off for half a second 
          digitalWrite(q,LOW); // set off
          digitalWrite(w,LOW); // set off
          digitalWrite(r,LOW); // set off 
          digitalWrite(t, HIGH); // set on 
          break;

        
      }
    }


}
