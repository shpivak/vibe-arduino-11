# Project 02 — Button LED

> Hebrew version: [README_HE.md](README_HE.md)

---

### What We Build

Press the button — LED turns ON.
Release it — LED turns OFF.
You're in control!

---

### Wiring

| Component | Component Pin | Arduino MEGA Pin |
|-----------|---------------|-----------------|
| LED — long leg (anode +) | — | Pin 13 |
| 220Ω resistor | between pin 13 and long leg | — |
| LED — short leg (cathode −) | — | GND |
| Button — leg 1 | — | Pin 2 |
| Button — leg 2 | — | GND |

> Arduino uses INPUT_PULLUP so no extra resistor is needed for the button.

**Wiring diagram:**
```
Arduino Pin 13 ──── [220Ω] ──── LED(+) ──── LED(−) ──── GND

Arduino Pin 2  ──── Button leg 1
                    Button leg 2 ──── GND
```

---

### Code

See `button_led.ino` in this folder.

---

### How It Works

Pin 2 is set with INPUT_PULLUP — normally it reads HIGH (1).
When you press the button, the pin connects to GND and reads LOW (0).
Arduino detects this and turns on the LED.
