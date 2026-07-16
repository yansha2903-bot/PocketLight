// ---------- Mini Flashlight ----------

const int LED_PIN = PIN_PA3;
const int BUTTON_PIN = PIN_PA2;
const int PHOTO_PIN = PIN_PA1;

bool flashlightOn = false;
bool lastButtonState = HIGH;

const int DARK_LEVEL = 500;
const int LIGHT_LEVEL = 700;

void setup() {
pinMode(LED_PIN, OUTPUT);
pinMode(BUTTON_PIN, INPUT_PULLUP);

analogWrite(LED_PIN, 0);
}

void loop() {

int lightValue = analogRead(PHOTO_PIN);

bool buttonState = digitalRead(BUTTON_PIN);

// Нажатие кнопки
if (lastButtonState == HIGH && buttonState == LOW) {

// Включаем только если темно
if (lightValue < DARK_LEVEL) {
flashlightOn = !flashlightOn;
}

delay(150);
}

lastButtonState = buttonState;

if (flashlightOn) {

// Если стало светло — выключаем
if (lightValue > LIGHT_LEVEL) {
flashlightOn = false;
analogWrite(LED_PIN, 0);
} else {

int brightness = map(lightValue, DARK_LEVEL, 0, 80, 255);
brightness = constrain(brightness, 80, 255);

analogWrite(LED_PIN, brightness);
}

} else {

analogWrite(LED_PIN, 0);

}

}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
