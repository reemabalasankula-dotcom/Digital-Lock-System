# Digital Lock System

## About the Project

Digital Lock System is an Arduino-based security project that provides password-based access control. A keypad is used to enter the password, and a servo motor is used as the locking mechanism.

The system also uses a buzzer to alert when an incorrect password is entered multiple times.

## Features

- Password-based access
- 4×4 keypad input
- Servo motor controlled lock
- Buzzer alert
- Three-attempt security system
- 30-second lockout after three wrong attempts
- Automatic locking after unlocking

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
- Keypad Library
- Servo Library

## Demo Password

The password used in the project code is:

`1121`

> This password is included only for demonstration purposes.

## How It Works

1. The user enters the password using the keypad.
2. The Arduino Nano compares the entered password with the stored password.
3. If the password is correct, the servo motor rotates to unlock the door.
4. A short buzzer sound indicates successful access.
5. The door remains unlocked for 5 seconds.
6. The servo then returns to the locked position.
7. If the password is incorrect, the system shows "Access Denied".
8. After three wrong attempts, the buzzer is activated and the system locks further input for 30 seconds.
9. After 30 seconds, the user can try again.

## Pin Connections

| Component | Arduino Pin |
|---|---|
| Keypad Rows | D2–D5 |
| Keypad Columns | D6–D9 |
| Servo Motor | D9 |
| Buzzer | D10 |

## Keypad Controls

| Key | Function |
|---|---|
| `#` | Check Password |
| `*` | Clear Input |
| `0–9` | Enter Password |


## My Contribution

- Worked on the Arduino-based implementation.
- Worked with keypad password input.
- Worked with servo motor control.
- Worked with buzzer alerts.
- Tested password verification and lockout functionality. 

## Future Improvements

- Add an LCD display.
- Add wireless access.
- Add IoT-based monitoring.
