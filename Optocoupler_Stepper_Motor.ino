// Find me on linkedin (linekdin.com/in/jatin-rana-india/)
// Github (@Jatin24creator)
/* 
This code was written to fulfill certain needs of another project. A short description of the project is 
given on git repo and Readme.md file 

*/
#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
const float circleRadius = 6.0; // Radius of the circle in centimeters
const float targetAngle = 72.0; // Desired angular displacement (in degrees)
const unsigned long holdTime = 2000; // Hold time (in milliseconds)
const unsigned long totalRevTime = 20000; // Total time for one revolution (in milliseconds)

float stepsPerMove = stepsPerRevolution * targetAngle / 360.0;

const int number_of_clockwise_rotations = 2; // Set the number of clockwise rotations
const int number_of_counterclockwise_rotation = 1  ; // Set the number of counter clockwise rotation

const int c = number_of_clockwise_rotations * 5;
const int cc = number_of_counterclockwise_rotation * 5;

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
int turn_number = 0;
// Define a volatile variable to store the count
volatile int counter = 0; 

void setup() {
  myStepper.setSpeed(72);
  pinMode(2, INPUT_PULLUP); // Set digital pin 2 as input with pull-up resistor
  Serial.begin(9600); // Initialize the serial communication

  // Attach the interrupt to digital pin 2 with FALLING edge trigger
  attachInterrupt(digitalPinToInterrupt(2), count, FALLING);
}

void loop() {

  // Your main loop code can go here if needed
  if (counter == 0 && turn_number ==0){
    Serial.println("Postion Intitialisation Begin");
    myStepper.step(stepsPerRevolution/200);
    delay(10);
    // turn_number ++;
    Serial.println(turn_number);
  }
  else if (turn_number>=cc){
    delay(4000);
    Serial.println("Rotating counterclockwise\n");
    myStepper.step(stepsPerMove);
    turn_number ++;
    Serial.println(turn_number);
  }
  else if (turn_number<c){
    delay(4000);
    Serial.println("Rotation Intialised!");
    Serial.println("Rotating Clockwise");
    myStepper.step(-stepsPerMove);
    turn_number ++;
    Serial.println(turn_number);
  }
  else{
    turn_number =1;
  }
  Serial.print("Count: ");
  Serial.println(counter);
  count ==0;
 }

void count() {
  counter++; // Increment the counter when the interrupt is triggered
   // Print the counter value to the serial monitor
}
