# Druck-I2C
About Arduino library and sample code for communication with Druck's DPS5000-I2C pressure sensor

dps5000.h is library of register.

DPS5000-2.ino is sample code to read/write data from/to DPS5000-I2C pressure sensor using terminal software

The library and sample code have been verified to work with Arduino UNO compatible Adafruit Metro Mini 328 board (ATmega328 chip).
Below is the link to Adafruit board page.<br>
www.adafruit.com/product/2590 <br>
Since DPS5000-I2C logic level is 3.3V, please make sure the board logic level is adjusted to 3.3V. 

Serial Command List

rp : Read Pressure<br>
Command : rp &lt; CRLF &gt; <br>
Reply : Pressure : &lt; Pressure Value &gt; &lt; Pressure Unit &gt; &lt; CRLF &gt;

rt : Read Temperature<br>
Command : rt &lt; CRLF &gt; <br>
Reply : Temperature : &lt; Temperature Value &gt;&lt; Temperature Unit &gt;&lt; CRLF &gt;

rc : Read Pressure and Temperature continuously. Reading will stop when LF is received (Enter button is pressed)<br>
Command : rc &lt; CRLF &gt; <br>
Reply : Pressure : &lt; Pressure Value &gt; &lt; Pressure Unit &gt; , Temperature : &lt; Temperature Value &gt;&lt; Temperature Unit &gt;&lt; CRLF &gt;

rz : Read zero offset adjust value stored in OFFSET_ADJ register. Factory default is 0x00<br>
Command : rz &lt; CRLF &gt; <br>
Reply : Offset : &lt; Offset Value &gt; &lt; Pressure Unit &gt; &lt; CRLF &gt;

si : Set address to be read
Command : si &lt; CRLF &gt; <br>
Reply : Set Sensor Address to be read. Type address number and press Enter. <br>
Send : &lt; Address to be read &gt; &lt; CRLF &gt; <br>

ci : Change sensor address

za : Adjust zero offset
