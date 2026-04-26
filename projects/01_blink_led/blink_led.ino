/*
  פרויקט 01 — נורית מהבהבת
  Project 01 — Blinking LED

  חיבורים / Wiring:
  - LED רגל ארוכה (+) ──── נגד 220Ω ──── פין 13
  - LED רגל קצרה  (−) ──── GND

  ארדואינו MEGA2560 / Arduino MEGA2560
*/

// פין הנורית / LED pin
int LED_PIN = 13;

void setup() {
  // הגדר את פין הנורית כפלט / Set LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // הדלק את הנורית / Turn LED ON
  digitalWrite(LED_PIN, HIGH);
  delay(1000);  // המתן שנייה / Wait 1 second

  // כבה את הנורית / Turn LED OFF
  digitalWrite(LED_PIN, LOW);
  delay(1000);  // המתן שנייה / Wait 1 second
}
