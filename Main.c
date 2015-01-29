/* Blink(LED)
 
 Turns on the built-in LED(Status LED) on for 1.0 second, then off for 0.1 second
 BOARD_LED_PIN was connected to pin 14 in OpenCM9.04.

                Compatibility
CM900                  O
OpenCM9.04             O

 created 28 Jan 2015
 by Mahmoud Dabbas
 */

void setup() {
  // Set up the built-in LED pin as an output:
  pinMode(BOARD_LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(BOARD_LED_PIN, HIGH); // set to as HIGH LED is turn-off
  delay(1000);          // Wait for 1.0 second
  digitalWrite(BOARD_LED_PIN, LOW);  // set to as LOW LED is turn-on
  delay(1000);          // Wait for 0.1 second
}
