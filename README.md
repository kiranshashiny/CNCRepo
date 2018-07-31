# CNCRepo

1.

The grblupload library is 

https://github.com/Protoneer/GRBL-Arduino-Library

Download and follow the instructions

	Down load the library from GitHub : https://github.com/Protoneer/GRBL-Arduino-Library/archive/master.zip

	Unzip the library and copy the main folder into the “Libraries” folder in the folder you installed your Arduino software. Eg. C:\arduino-1.0.3\libraries\

	Rename the folder to “GRBL”. (This will stop the Arduino IDE from complaining about the long folder name)
	
	e.g:
	cd Documents/Arduino/libraries
	cp -r Downloads/GRBL-Arduino-Library GRBL/

	Open up the Arduino IDE.

	Click on the following menu : File -> Examples – > GRBL (or what ever you renamed the folder to) -> ArduinoUno

	Upload the sketch to your Arduino board.
	Now, run the Universal G Code sender and try the X+ and the X-


2. https://github.com/grbl/grbl/tree/master/grbl/examples/grblUpload

   Upload this code first to the Arduino, and then connect the 12V to the CNC shield.
  

3. UploadGCodeSender.jar - 
    
	If the port is not to be seen, then close any open ports of the Arduino and Open the COM port of the Universal G Code Sender.

	Check that the power 12V is on.
	Things I noticed :
	If the 12v power is OFF - then the code/buttons still runs.
	The active state Run turns Green -even though there is NO 12v Power.

	If the GRBL not loaded that means  - the File->Examples -> GRBL is not loaded into Arduino.
	Follow instructions above.
	
	
