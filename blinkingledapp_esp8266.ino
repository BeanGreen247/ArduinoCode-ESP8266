#define LED 2 // blinking on the module ESP8266 can be replaced with BUILTIN_LED
#define LED 14 // can be replaced with D5
 
void setup() {
  //initializes LED as as output
  pinMode(LED, OUTPUT);
}
 
 
void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                 // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second
}
