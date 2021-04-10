/*
 * Program Name: Blinking Lights (2-9)  
 * Author: Kelly Mak 
 * Date Written: 26 November 2019
 * Description: 
 *  Turns on each one in order and then extinguish them in order
 * /

/* Pin Definitions */
const int L1 = 2;
const int L2 = 3;
const int L3 = 4;
const int L4 = 5;
const int L5 = 6;
const int L6 = 7;
const int L7 = 8;
const int L8 = 9;

/*
 * Function Name: setup
 * Purpose: Run once when the system powers up. 
 */
 
void setup() 
{
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);
  // define light is an output:
}

/*
 * Function name: loop
 * Purpose: Runs over and over again, as long as the Arduino has power
 */
void loop() 
{
  //turn on each of the LEDs in order
  digitalWrite(L1, HIGH);
  delay(500);
  digitalWrite(L2, HIGH);
  delay(500);
  digitalWrite(L3, HIGH);
  delay(500);
  digitalWrite(L4, HIGH);
  delay(500);
  digitalWrite(L5, HIGH);
  delay(500);
  digitalWrite(L6, HIGH);
  delay(500);
  digitalWrite(L7, HIGH);
  delay(500); 
  digitalWrite(L8, HIGH);
  delay(500);

 //turn off the LEDs in order 
  digitalWrite(L1, LOW);
  delay(500);
  digitalWrite(L2, LOW);
  delay(500);
  digitalWrite(L3, LOW);
  delay(500);
  digitalWrite(L4, LOW);
  delay(500);
  digitalWrite(L5, LOW);
  delay(500);
  digitalWrite(L6, LOW);
  delay(500);
  digitalWrite(L7, LOW);
  delay(500);
  digitalWrite(L8, LOW);
  delay(500);
  // the light will turn on for half a second and off for half a second repeatedly:
}
