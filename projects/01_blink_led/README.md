# Project 01 — Blinking LED

> Hebrew version: [README_HE.md](README_HE.md)

---

### What We Build

An LED that turns ON for one second and OFF for one second — over and over!
This is the first project every Arduino programmer makes.

---

### Wiring

| Component | Component Pin | Arduino MEGA Pin |
|-----------|---------------|-----------------|
| LED — long leg (anode +) | — | Pin 13 |
| 220Ω resistor | between pin 13 and long leg | — |
| LED — short leg (cathode −) | — | GND |

**Wiring diagram:**
```
Arduino Pin 13 ──── [220Ω] ──── LED(+) ──── LED(−) ──── GND
```

---

### Code

See `blink_led.ino` in this folder.

---

### How It Works

Arduino sets pin 13 HIGH (5V) — LED turns ON.
After 1 second, it sets pin 13 LOW (0V) — LED turns OFF.
This repeats forever in a loop.
