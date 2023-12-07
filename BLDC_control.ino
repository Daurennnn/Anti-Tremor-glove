#include <Servo.h> // connect the library for PWM signal
Servo ESC; //Create an object of class Servo
void setup() {
ESC.attach(9,1000,2300); //declares the connection port and signal parameters
delay(10000); // Delay for BLDC calibration
}
void loop() {
ESC.write(180); //power the motor at the maximum rate
}
