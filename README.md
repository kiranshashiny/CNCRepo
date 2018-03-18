# CNCRepo

1.

The grblupload library is 

https://github.com/Protoneer/GRBL-Arduino-Library

Download and follow the instructions

	Down load the library from GitHub : https://github.com/Protoneer/GRBL-Arduino-Library/archive/master.zip

	Unzip the library and copy the main folder into the “Libraries” folder in the folder you installed your Arduino software. Eg. C:\arduino-1.0.3\libraries\

	Rename the folder to “GRBL”. (This will stop the Arduino IDE from complaining about the long folder name)

	Open up the Arduino IDE.

	Click on the following menu : File -> Examples – > GRBL (or what ever you renamed the folder to) -> ArduinoUno

	Upload the sketch to your Arduino board.



2. https://github.com/grbl/grbl/tree/master/grbl/examples/grblUpload

   Upload this code first to the Arduino, and then connect the 12V to the CNC shield.
  

3. UploadGCodeSender.jar - 
    
	On Windows, start windows.bat should start the application.
	
	If the port is not to be seen, then close any open ports of the Arduino and Open the COM port of the Universal G Code Sender.


