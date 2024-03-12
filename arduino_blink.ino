#define LED_PIN 8

void blink_led(int pin_number,int delay_time)
{
  if(pin_number < 1 || pin_number > 13) return;
  while(true)
  {
    digitalWrite(pin_number,HIGH);
    delay(delay_time);
    digitalWrite(pin_number,LOW);
    delay(delay_time);
  }
}

void setup() {
pinMode(LED_PIN, OUTPUT);

}

void loop() {
digitalWrite(LED_PIN, HIGH);
delay(3000);
digitalWrite(LED_PIN, LOW);
delay(3000);
}
