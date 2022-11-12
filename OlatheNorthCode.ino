/* Arduino example code to control multiple LEDs with a Force Sensitive Resistor (FSR) as pressure sensor. More info: https://www.makerguides.com */

// Define pins:
#define fsrpin A0
#define green 7
#define yellow 5
#define red 2

// Define variables:
int fsrreading;

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  // Set LED pins as output:
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  // Read the FSR pin and store the output as fsrreading:
  fsrreading = analogRead(fsrpin);

  // Print the fsrreading in the serial monitor:
  Serial.println(fsrreading);

  // Control the LEDs:
  if (fsrreading > 50 && fsrreading < 100) {
    digitalWrite(green, HIGH);
  }
  else digitalWrite(green, LOW);
  
  if (fsrreading > 100 && fsrreading <200) {
    digitalWrite(yellow, HIGH);
  }
  else digitalWrite(yellow, LOW);
  
  if (fsrreading > 200) {
    digitalWrite(red, HIGH);
  }
  else digitalWrite(red, LOW);
  
}
