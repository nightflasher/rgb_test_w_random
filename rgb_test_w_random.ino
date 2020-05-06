/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led_blu = 9;
int led_grn = 8;
int led_red = 7;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the analog pin as an output.
  pinMode(led_blu, OUTPUT);     
  pinMode(led_grn, OUTPUT);     
  pinMode(led_red, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(led_blu, (random(255)));   // turn the LED on (HIGH is the voltage level)
  analogWrite(led_grn, (random(255)));    // turn the LED off by making the voltage LOW
  analogWrite(led_red, (random(255)));    // turn the LED off by making the voltage LOW
delay(250);
  /*
  // fade in from min to max in increments of 5 points:
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(led_grn, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(30);                            
  } 

  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(led_grn, fadeValue);         
    // wait for 30 milliseconds to see the dimming effect    
    delay(30);                            
  }  
*/
}


