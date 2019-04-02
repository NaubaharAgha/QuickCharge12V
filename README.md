# QuickCharge12V

Makes an Arduino mimic the Quick Charge exchange (for 12V) to a USB port on a Quick Charge compatible device (power supply or battery pack). This will allow the power source to deliver 12V of power. Maximum power Quick Charge supports is 5A at 12V. Be careful when using this...

Digital Pin 4 is Data + <br />
Digital Pin 6 is Data - 

TO DO:
- Add multiple options to Quick Charge levels (5V, 9V, 12V, 20V?)
- Add external button input to cycle through options? Or at least a variable in the head of the file to choose before loading. Also, a method of signifying what Voltage is chosen. LED blinks?
- Create circuit to possibly add a power switch?
