Wireless control of NeoPixels using a web graphical interface running on an Arduino.

Designed for the Arduino Nano RP2040 connect.
Needs an Arduino that supports WiFiNINA. 

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Huge thanks to  <http://www.penguintutor.com/projects/arduino-rp2040-pixelstrip>  for creating the base code for this project.



--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Default WiFi name is "myVESC", and default password is "yourpassword". Once connected, visit the web address: http://192.168.4.1 .  All website commands will be sent to the LEDs on clicking Apply.

Personal LED parameters should be set in config.h. 

You must download the VescUart Arduino library for this code to work: https://github.com/SolidGeek/VescUart 
