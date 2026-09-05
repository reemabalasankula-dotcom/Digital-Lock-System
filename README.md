# Digital Lock System

## About the Project

Digital Lock System is an Arduino-based security project that provides password-based access control. A keypad is used to enter the password, while a servo motor acts as the locking mechanism.

## Features

- Password-based access
- Keypad input
- Servo motor controlled locking
- Buzzer alert for wrong attempts
- 30-second lockout after three wrong passwords

## Hardware Used

- Arduino Nano
- 4×4 Keypad
- SG90 Servo Motor
- Buzzer
- Breadboard
- Jumper Wires
- USB Cable / Power Supply

## Software Used

- Arduino IDE
- Embedded C/C++
- Servo Library
- Keypad Library

## How It Works

1. The user enters the password using the keypad.
2. The Arduino Nano checks the entered password.
3. If the password is correct, the servo motor rotates and the lock opens.
4. If the password is wrong, the user can try again.
5. After three consecutive wrong attempts, the buzzer turns ON.
6. The system blocks further input for 30 seconds.
7. After 30 seconds, the system allows the user to enter the password again.

## Pin Connections

| Component | Arduino Pin |
|---|---|
| Keypad Rows | D2–D5 |
| Keypad Columns | D6–D9 |
| Servo Motor | D10 |
| Buzzer | D11 |
| Power | 5V |
| Ground | GND |

## Code

The Arduino source code is available in the `code` folder.

## My Contribution

- Worked on the Arduino-based implementation.
- Worked with keypad password input.
- Worked with servo motor and buzzer control.
- Tested password verification and lockout functionality.

## Project Images

Project images will be added here.

## Demo Video

Project demonstration video will be added here.

## Future Improvements

- Add an LCD display.
- Add wireless access.
- Add IoT-based monitoring.
