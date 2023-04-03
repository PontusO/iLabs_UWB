# iLabs_UWB
A support library for the Challenger RP2040 UWB boards with the DWM3000 module.

<img src="https://usercontent.one/wp/ilabs.se/wp-content/uploads/2023/04/iso1-2048-1.jpg" alt="drawing" width="640"/>
![Challenger RP2040 UWB](https://usercontent.one/wp/ilabs.se/wp-content/uploads/2023/04/iso1-2048-1.jpg)

##Introduction

The DWM3000 is an ultra-wideband (UWB) transceiver module developed by Qorvo Inc. It operates in the frequency range of 3.1 GHz to 10.6 GHz and has a maximum output power of 4 dBm. The module uses the IEEE 802.15.4a standard for UWB communication, which enables highly accurate ranging and positioning with an accuracy of up to 10 cm.

The DWM3000 module integrates a Qorvo DW3110 chip, which provides UWB communication capabilities. The module measures 21mm x 16mm x 2.5mm and has a power consumption of approximately 75mA during active mode and 1.5μA during sleep mode. It supports SPI and UART(Not supported on the Challenger board) interfaces for communication with external devices and has a built-in antenna for wireless communication.

The DWM3000 is designed for use in a variety of indoor positioning and communication applications, such as asset tracking, inventory management, and personnel tracking. It also features a small form factor and low power consumption, making it suitable for battery-powered devices.

Overall, the DWM3000 is a highly accurate UWB transceiver module designed for indoor positioning and communication applications that require high precision and low power consumption.

It is IEEE 802.15.4a and IEEE 802.15.4z BPRF mode compliant and allows location of objects to a precision of 10 cm. The module has worldwide UWB support through its operation on UWB channel 5 (6.5 GHz) and channel 9 (8 GHz). The module is also interoperable with the Apple U1 chip and is designed to be compliant to the FiRa™ PHY and MAC specifications enabling interoperability with other FiRa™ compliant devices.

We paired this marvelous module with our own proven RP2040 base design to create a powerfull and easy to use, and yet small enough to be usable, development board. This board follows the Feather form factor and includes technology to manage a LiPo battery.

The included examples are all tested to work on our board so you can get started creating super cool stuff from day one.

##Usage

(TBD)