# RePhone API for Arduino
The RePhone API for Arduino was created for SeeedStudio's [Rephone](https://wiki.seeedstudio.com/RePhone/) project.
The API is a [Wire](https://www.arduino.cc/en/Reference/Wire) based protocol designed to be used by programable core modules such as Xadow GSM+BLE to programmatically control peripheral modules. The peripheral modules shipped preprogrammed to handle the protocol. Xadow modules are connected using  built-in 11 pin Xadow Connectors with flexible flat cables. Power to the modules is provided through the Xadow Connectors by a core module.

## Xadow RePhone Modules API
Refer to the example sketches for use.
* LSensorHub.h - [Xadow Basic Sensors](https://wiki.seeedstudio.com/Xadow_Basic_Sensors/) including accelerometer, light, and temperature sensors
* LLedMatrix.h - [Xadow LED 5x7](https://wiki.seeedstudio.com/Xadow_LED_5x7/) matrix
* LGPS.h - [Xadow GPS v2](https://wiki.seeedstudio.com/Xadow_GPS_V2/)
* LNFC.h - [Xadow NFC v2](https://wiki.seeedstudio.com/Xadow_NFC_v2/)
* LWs2812.h - [Xadow Duino](https://wiki.seeedstudio.com/Xadow_Duino/)

## Xadow Duino
The [Xadow Duino](https://wiki.seeedstudio.com/Xadow_Duino/), in addition to be a module, can be reprogramed easily using the [Arduino IDE](https://www.arduino.cc/en/Main/Software). While the Xadow Duino can control other modules, power has to be supplied to the Xadow Connectors beakout pins in order to power the other modules.
