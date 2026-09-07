#include <Keypad.h>
#include <Servo.h>

// --- Servo setup ---
Servo lockServo;
int servoPin = 9;

// --- Buzzer setup ---
int buzzer = 10;

// --- Password setup ---
String password = "1121";  // Set your password here
String input = "";
int wrongAttempts = 0;

// --- Keypad setup ---
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {2, 3, 4, 5};  // connect to R1, R2, R3, R4
byte colPins[COLS] = {6, 7, 8, 9};   // connect to C1, C2, C3, C4

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
  lockServo.attach(servoPin);
  pinMode(buzzer, OUTPUT);

  lockServo.write(0);  // Locked position
  Serial.println("Enter Password:");
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    if (key == '#') {
      checkPassword();
      input = "";  // clear after check
    }
    else if (key == '*') {
      input = "";  // clear input manually
      Serial.println("Cleared input");
    }
    else {
      input += key;
      Serial.print("*");  // hide actual password
    }
  }
}

// --- Check entered password ---
void checkPassword() {
  Serial.println();

  if (input == password) {
    Serial.println("Access Granted");
    unlockDoor();
    wrongAttempts = 0;  // reset wrong count
  }
  else {
    wrongAttempts++;
    Serial.println("Access Denied");

    if (wrongAttempts >= 3) {
      Serial.println("Too many wrong attempts! System locked for 30 seconds");
      digitalWrite(buzzer, HIGH);
      delay(3000);
      digitalWrite(buzzer, LOW);

      delay(30000);  // lock period

      wrongAttempts = 0;
      Serial.println("You can try again.");
    }
  }
}

// --- Unlock door (servo) ---
void unlockDoor() {
  lockServo.write(90);  // Unlock position

  digitalWrite(buzzer, HIGH);
  delay(200);            // short beep
  digitalWrite(buzzer, LOW);

  delay(5000);           // door stays open for 5 seconds

  lockServo.write(0);    // lock again
  Serial.println("Door locked again");
}