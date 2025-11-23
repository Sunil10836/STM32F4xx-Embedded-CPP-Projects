
# STM32 UART Communication using Embedded C++ (Bare Metal Programming)

1. This project demonstrates **STM32 UART communication.**
2. This project is implemented using **Embeeded C++ (Bare Metal Programming)**
3.  When **User Button is Pressed then message is sent over UART and LED turns ON.**

##  Hardware Used
1. **STM32 Nucleo-F446RE**
2. **On-board LED**
3. **On-board Push Button**

##  Software Used
1. **STM32 Cube IDE** : For Programming and Code Debugging
2. **Docklight** :  To see UART Meassages

## Key Features
1. **GPIO Base Class**
2. **LED Class (inherits from GPIO)**
3. **Button Class (inherits from GPIO)**
4. **UART Class (inherits from GPIO for TX/RX pin setup)**
5. **UART transmit functionality**
6. **Bare-metal (register-level) programming**
7. **Written in Embedded C++**

## Class Design Summary

1. **GPIO Base Class**
   1. Pin configuration
   2. Mode selection
   3. Pull-up/Pull-down
   4. Alternate function

2. **LED Class (inherits GPIO)**
   1. Provides LED_ON(), LED_OFF(), LED_Toggle() functions
   2. Initializes pin as output
    
3. **UART Class (inherits GPIO)**
   1. Uses GPIO to configure TX/RX pins
   2. Configures UART registers:
      1. Baudrate
      2. Stop bits
      3. Parity
      4. Word length
   3. Provides functions:   
      1. sendChar()
      2. sendString()
    
## How It Works:
1. When **User Button is Pressed then message is sent over UART and LED turned ON.**
2. When **User Button is Released then message is sent over UART and LED turned OFF.**
