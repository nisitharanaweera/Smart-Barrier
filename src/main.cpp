#include <Arduino.h>

const int masterPwr = 14;
const int panicStop = 12;
const int reset = 27;
const int arming = 26;
const int disarming = 25;

const int masterPwrLed = 16;
const int panicStopLed = 17;
const int resetLed = 5;
const int armingLed = 18;
const int disarmingLed = 19;

void setup() {
  Serial.begin(115200);
  pinMode(masterPwr, INPUT_PULLUP);
  pinMode(panicStop, INPUT_PULLUP);
  pinMode(reset, INPUT_PULLUP);
  pinMode(arming, INPUT_PULLUP);
  pinMode(disarming, INPUT_PULLUP);
  
  pinMode(masterPwrLed, OUTPUT);
  pinMode(panicStopLed, OUTPUT);
  pinMode(resetLed, OUTPUT);
  pinMode(armingLed, OUTPUT);
  pinMode(disarmingLed, OUTPUT);
}

void loop() {
  if (digitalRead(masterPwr) == LOW) {
    digitalWrite(masterPwrLed, HIGH);
    Serial.println("Master Power");
    delay(500); // Debounce delay
    while (digitalRead(masterPwr) == LOW) {
    }
    digitalWrite(masterPwrLed, LOW);
  }
  
  if (digitalRead(panicStop) == LOW) {
    digitalWrite(panicStopLed, HIGH);
    Serial.println("Panic Stop Initiated!");
    delay(500); // Debounce delay
    while (digitalRead(panicStop) == LOW) {
    }
    digitalWrite(panicStopLed, LOW);
  }
    if (digitalRead(reset) == LOW) {
    digitalWrite(resetLed, HIGH);
    Serial.println("Resetting the System");
    delay(500); // Debounce delay
    while (digitalRead(reset) == LOW) {
    }
    digitalWrite(resetLed, LOW);
  }

    if (digitalRead(arming) == LOW) {
    digitalWrite(armingLed, HIGH);
    Serial.println("System Arming");
    delay(500); // Debounce delay
    while (digitalRead(arming) == LOW) {
    }
    digitalWrite(armingLed, LOW);
  }

    if (digitalRead(disarming) == LOW) {
    digitalWrite(disarmingLed, HIGH);
    Serial.println("System Disarming");
    delay(500); // Debounce delay
    while (digitalRead(disarming) == LOW) {
    }
    digitalWrite(disarmingLed, LOW);
  }

  
  

}


