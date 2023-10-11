# Stepper-Motor-Optocoupler-ArduinoUNO
Controlling Rotations of Stepper Motor and Position Initialization using Optocoupler Sensor

Project Description: 
This is a code to partially fulfill the requirements of another project where the stepper motor needed to be initialised to the same position on start and then
needed to be stopped at 5 intervals for a duration of 4 seconds each with the flexibility to control the clockwise and counterclockwise rotations.

Library Required: (https://www.arduino.cc/reference/en/libraries/stepper/)

Components Used:                                                                    
1. Arduino UNO R3                                                                  
2. NEMA 23 Stepper Motor                                                                   
3. L298N Motor Driver                                                               
4. Tachometer/Optocoupler Sensor                                                    
5. Jumper Wires
6. 12V DC 1.0A Power Supply                                                        
7. Philips Screw Driver                                                             
8. 5V DC FAN

Pin Diagram Layout:![image](https://github.com/Jatin24creator/Stepper-Motor-Optocoupler-ArduinoUNO/assets/85844100/3c5eedb5-8196-4920-9f6f-755f816adf72)

PRECAUTION! For using the stepper motor for longer duration make sure to use a 5V DC fan on the base of stepper motor and motor driver along with the heat sink. As due the heating issue on long duration can cause major burn and shortcircuit in jumper wires.


