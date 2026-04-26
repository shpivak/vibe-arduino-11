/*
  פרויקט 03 — בוזר מלודיה: טווינקל טווינקל ליטל סטאר
  Project 03 — Buzzer Melody: Twinkle Twinkle Little Star

  חיבורים / Wiring:
  - בוזר פסיבי (+) ──── פין 8
  - בוזר פסיבי (−) ──── GND

  דרוש בוזר פסיבי! / Requires passive buzzer!

  ארדואינו MEGA2560 / Arduino MEGA2560
*/

// פין הבוזר / Buzzer pin
int BUZZER_PIN = 8;

// תדרי תווים (הרץ) / Note frequencies (Hz)
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440

// מלודיה: טווינקל טווינקל ליטל סטאר / Twinkle Twinkle Little Star melody
int melody[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4,
  NOTE_D4, NOTE_D4, NOTE_C4,
  NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4,
  NOTE_E4, NOTE_E4, NOTE_D4,
  NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4,
  NOTE_E4, NOTE_E4, NOTE_D4,
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4,
  NOTE_D4, NOTE_D4, NOTE_C4
};

// משך כל תו במילי-שניות / Duration of each note in milliseconds
int noteDurations[] = {
  400, 400, 400, 400,
  400, 400, 800,
  400, 400, 400, 400,
  400, 400, 800,
  400, 400, 400, 400,
  400, 400, 800,
  400, 400, 400, 400,
  400, 400, 800,
  400, 400, 400, 400,
  400, 400, 800,
  400, 400, 400, 400,
  400, 400, 800
};

// מספר התווים במלודיה / Number of notes in melody
int totalNotes = sizeof(melody) / sizeof(melody[0]);

void setup() {
  // הגדר פין הבוזר כפלט / Set buzzer pin as output
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // נגן כל תו / Play each note
  for (int i = 0; i < totalNotes; i++) {
    // נגן את התו / Play the note
    tone(BUZZER_PIN, melody[i], noteDurations[i]);

    // המתן מעט יותר ממשך התו (הפרדה בין תווים) / Wait slightly longer than note duration
    delay(noteDurations[i] * 1.2);

    // עצור את הצליל / Stop the sound
    noTone(BUZZER_PIN);
  }

  // הפסקה בין חזרות / Pause between repeats
  delay(2000);
}
