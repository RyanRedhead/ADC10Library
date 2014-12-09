ADC10 Library
=====
The purpose of this library is to setup pins 2-4 on the MSP430 with the analog to digital converter.
The ADC10.c file takes a pin number, 2-4, and sets the specific settings to read for that pin. Then, the sensor reading is returned under the unsigned short "readvalue". 

Documentation: Matt Bergstedt looked over my code and told me I needed to place one of the ADC10 settings later in the code for it to work like I wanted.
