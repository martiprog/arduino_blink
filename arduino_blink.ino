#define LED_PIN 8

// This is a line of comment!

void setup() {
pinMode(LED_PIN, OUTPUT);

}

void loop() {
digitalWrite(LED_PIN, HIGH);
delay(3000);
digitalWrite(LED_PIN, LOW);
delay(3000);
}
