/*
 * Program Name: Blinking Light  
 * Author: Kelly Mak 
 * Date Written: 26 November 2019
 * Description: 
 *  Turns on a LED for half a second, then turns off for half a second repeatedly
 * /

/* Pin Definitions */
const int light = 13;

/*
 * Function Name: setup
 * Purpose: Run once when the system powers up. 
 */
 
void setup() 
{
  pinMode(light, OUTPUT);
  // define light is an output:
}

/*
 * Function name: loop
 * Purpose: Runs over and over again, as long as the Arduino has power
 */
void loop() 
{
  digitalWrite(light, HIGH);
  delay(500);
  digitalWrite(light, LOW);
  delay(500);
  // the light will turn on for half a second and off for half a second repeatedly:
}
