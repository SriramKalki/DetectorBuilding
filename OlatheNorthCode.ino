/* Arduino example code to control multiple LEDs with a Force Sensitive Resistor (FSR) as pressure sensor. More info: https://www.makerguides.com */

// Define pins:
#define fsrpin A0
#define green 7
#define blue 5
#define red 2

// Define variables:
int fsrreading;

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  // Set LED pins as output:
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  // Read the FSR pin and store the output as fsrreading:
  fsrreading = analogRead(fsrpin);

  // Print the fsrreading in the serial monitor:
  weight = .616*fsrreading + 0.8848;
  Serial.println(weight);

  // Control the LEDs:
  if (weight > 50 && weight < 100) {
    digitalWrite(green, HIGH);
  }
  else digitalWrite(green, LOW);
  
  if (weight > 100 && weight <200) {
    digitalWrite(blue, HIGH);
  }
  else digitalWrite(blue, LOW);
  
  if (weight > 200) {
    digitalWrite(red, HIGH);
  }
  else digitalWrite(red, LOW);
  
}
