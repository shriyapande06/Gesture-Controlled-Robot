#include <SoftwareSerial.h>

SoftwareSerial BT(2, 3); // RX, TX

char command;

int motor1Pin1 = 8;
int motor1Pin2 = 9;
int motor2Pin1 = 10;
int motor2Pin2 = 11;

// Declare function before use
void stopMotors();

void setup() {

    Serial.begin(9600);
    BT.begin(9600);

    pinMode(motor1Pin1, OUTPUT);
    pinMode(motor1Pin2, OUTPUT);
    pinMode(motor2Pin1, OUTPUT);
    pinMode(motor2Pin2, OUTPUT);

    stopMotors();
}

void loop() {

    if (BT.available() > 0) {

        command = BT.read();

        Serial.print("Received: ");
        Serial.println(command);

        switch (command) {

            case 'F': // Forward

                digitalWrite(motor1Pin1, HIGH);
                digitalWrite(motor1Pin2, LOW);

                digitalWrite(motor2Pin1, HIGH);
                digitalWrite(motor2Pin2, LOW);

                break;

            case 'B': // Backward

                digitalWrite(motor1Pin1, LOW);
                digitalWrite(motor1Pin2, HIGH);

                digitalWrite(motor2Pin1, LOW);
                digitalWrite(motor2Pin2, HIGH);

                break;

            case 'L': // Left

                digitalWrite(motor1Pin1, LOW);
                digitalWrite(motor1Pin2, HIGH);

                digitalWrite(motor2Pin1, HIGH);
                digitalWrite(motor2Pin2, LOW);

                break;

            case 'R': // Right

                digitalWrite(motor1Pin1, HIGH);
                digitalWrite(motor1Pin2, LOW);

                digitalWrite(motor2Pin1, LOW);
                digitalWrite(motor2Pin2, HIGH);

                break;

            case 'S': // Stop

                stopMotors();

                break;
        }
    }
}

void stopMotors() {

    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);

    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, LOW);
}