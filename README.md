# Arduino Digital Clock with Shift Register

## Overview
This repository contains the Arduino code and circuit design for a digital clock project. The clock uses a shift register and six 7-segment displays to accurately depict the time. This project is an excellent example of how digital electronics can be used to create practical and functional devices.

## Project Description
The primary objective of this project is to create a digital clock using an Arduino. It features six 7-segment displays controlled by 6 8-bit shift registers, enabling efficient management of multiple display units. This setup allows for a clear and accurate representation of time in hours, minutes, and seconds.

## Circuit Diagram
Below is the circuit diagram for the Arduino Digital Clock:

![Taisir Hassan- Arduino Digital Clock Shift Register](https://github.com/taisirhassan/Digital-Clock-Shift-Register-/assets/85134103/70811f89-6b94-4639-aa00-1fb908091f47)

## Components
- Arduino (Uno, Mega, etc.)
- 6 x 7-Segment Displays
- 6 Shift Registers (8-bit)
- Breadboard and Jumper Wires
- Resistors

## Code Structure
- `main.ino`: The main Arduino sketch for the digital clock. It includes the logic for controlling the 7-segment displays through the shift register and handling the timekeeping functionality.

## Setup and Installation
### Hardware Setup
1. **Assemble the Circuit**: Construct the circuit as per the provided diagram, ensuring all components, especially the 7-segment displays and the shift register, are correctly connected to the Arduino.
2. **Connections Check**: Verify all connections are secure and match the circuit diagram.

### Software Installation
1. **Arduino IDE**: If you haven't already, install the Arduino IDE.
2. **Open the Sketch**: Load `main.ino` into the Arduino IDE.
3. **Upload to Arduino**: With your Arduino connected, select the right board and port in the IDE, then upload the sketch.

## Testing the Project
Once the code is uploaded, the digital clock should start displaying the current time. Check each of the 7-segment displays for correct number depiction and ensure the timing is accurate.

## License
This project is open-source and can be modified and distributed under the MIT License.
