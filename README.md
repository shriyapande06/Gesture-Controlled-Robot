# Gesture-Controlled-Robot

## Overview

The Gesture Controlled Robot is a wireless robotic system that responds to smartphone gestures. Using a Bluetooth-enabled mobile application and the smartphone's built-in accelerometer, the robot can move forward, backward, left, and right based on the user's hand movements. The system demonstrates the integration of embedded systems, wireless communication, and robotics using Arduino.

---

## Features

* Gesture-based robot control using a smartphone
* Wireless communication through HC-05 Bluetooth module
* Forward, Backward, Left, Right, and Stop movements
* Arduino-based control system
* Low-cost and beginner-friendly robotics project
* Real-time response to user gestures

---

## Components Used

| Component                   | Quantity    |
| --------------------------- | ----------- |
| Arduino UNO/Nano            | 1           |
| HC-05 Bluetooth Module      | 1           |
| L293D/L298N Motor Driver    | 1           |
| DC Geared Motors            | 2           |
| Robot Chassis               | 1           |
| 7.4V Lithium-ion Battery    | 1           |
| Breadboard                  | 1           |
| Voltage Divider (1kΩ + 2kΩ) | 1 Set       |
| Connecting Wires            | As Required |
| Caster Wheel                | 1           |

---

## System Architecture

### Signal Flow

Smartphone → HC-05 Bluetooth Module → Arduino UNO/Nano → Motor Driver → DC Motors → Robot Movement

---

## Circuit Diagram

The complete circuit diagram is available below:

![Circuit Diagram](./Circuit%20Diagram.png)

---

## Working Principle

1. The smartphone's accelerometer detects the tilt direction.
2. The mobile application converts the gesture into commands:

   * **F** → Forward
   * **B** → Backward
   * **L** → Left
   * **R** → Right
   * **S** → Stop
3. Commands are transmitted wirelessly through Bluetooth.
4. The HC-05 module receives the commands and forwards them to the Arduino.
5. Arduino processes the command and drives the motors using the motor driver.
6. The robot moves according to the received gesture.

---

## Software Requirements

* Arduino IDE
* Bluetooth Controller Application (Accelerometer Mode)
* USB Driver for Arduino

---

## Code

The Arduino source code is available in:

```text
GestureRobo.ino
```

---

## Installation and Setup

1. Install Arduino IDE.
2. Open `GestureRobo.ino`.
3. Select the correct Arduino board (UNO/Nano).
4. Connect the Arduino using USB.
5. Upload the code.
6. Pair the HC-05 Bluetooth module with your smartphone.

   * Default Password: `1234` or `0000`
7. Open the Bluetooth Controller application.
8. Connect to the HC-05 module.
9. Tilt the smartphone to control the robot.

---

## Project Structure

```text
Gesture-Controlled-Robot/
│
├── README.md
├── GestureRobo.ino
├── Circuit Diagram.png
└── REPORT.pdf
```

---

## Documentation

Complete project documentation is available in:

```text
REPORT.pdf
```

---

## Applications

* Educational Robotics
* Human-Machine Interaction
* Wireless Control Systems
* Robotics Learning Projects
* Automation Demonstrations

---

## Future Enhancements

* Obstacle Avoidance
* Camera Integration
* IoT-Based Remote Control
* GPS Navigation
* Autonomous Navigation
* Voice-Controlled Operation

---

## Conclusion

This project demonstrates an intuitive and efficient method of controlling a robot using smartphone gestures. By combining Arduino, Bluetooth communication, and accelerometer-based control, the system provides a simple yet effective platform for learning embedded systems, wireless communication, and robotics.

---

## Author

Developed as an academic and learning project in Embedded Systems and Robotics.
