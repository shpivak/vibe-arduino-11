# Project 03 — Buzzer Melody

> Hebrew version: [README_HE.md](README_HE.md)

---

### What We Build

A buzzer that plays "Twinkle Twinkle Little Star"!
Arduino sends sound waves at different frequencies to create music.

> **Note:** This project requires a **passive buzzer**.
> An active buzzer will only make a single beep, not a melody.

---

### Wiring

| Component | Component Pin | Arduino MEGA Pin |
|-----------|---------------|-----------------|
| Passive buzzer — pin + | — | Pin 8 |
| Passive buzzer — pin − | — | GND |

**Wiring diagram:**
```
Arduino Pin 8 ──── Buzzer (+)
GND           ──── Buzzer (−)
```

---

### Code

See `buzzer_melody.ino` in this folder.

---

### How It Works

The `tone()` function sends a sound wave at a specific frequency to the buzzer pin.
Higher frequency = higher pitch note.
We play each note for a set duration, then stop with `noTone()`.
