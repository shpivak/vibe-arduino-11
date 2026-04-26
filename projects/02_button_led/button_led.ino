/*
  פרויקט 02 — כפתור שמדליק נורית
  Project 02 — Button LED

  חיבורים / Wiring:
  - LED רגל ארוכה (+) ──── נגד 220Ω ──── פין 13
  - LED רגל קצרה  (−) ──── GND
  - כפתור רגל 1   ──── פין 2
  - כפתור רגל 2   ──── GND

  ארדואינו MEGA2560 / Arduino MEGA2560
*/

// פינים / Pins
int LED_PIN    = 13;
int BUTTON_PIN = 2;

void setup() {
  // פין הנורית — פלט / LED pin — output
  pinMode(LED_PIN, OUTPUT);

  // פין הכפתור — קלט עם PULLUP פנימי / Button pin — input with internal PULLUP
  // (לא צריך נגד חיצוני / no external resistor needed)
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // קרא את מצב הכפתור / Read button state
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    // הכפתור נלחץ — הדלק נורית / Button pressed — turn LED ON
    digitalWrite(LED_PIN, HIGH);
  } else {
    // הכפתור לא נלחץ — כבה נורית / Button not pressed — turn LED OFF
    digitalWrite(LED_PIN, LOW);
  }
}
