# Arduino MEGA2560 — Kids' Learning Kit

> A beginner-friendly Arduino project guide for kids aged 8–12, using the **Arduino MEGA2560 Complete Starter Kit**.
> Hebrew version: [README_HE.md](README_HE.md)

> **For AI agents / Claude:** Read [`CLAUDE.md`](CLAUDE.md) before doing anything in this repo. It defines user modes, guardrails, git workflow, and output format.

---

## What is this?

This is a guide for building awesome Arduino projects!
Every project includes code, wiring, and a simple explanation.

---

## Required Hardware

- Arduino MEGA2560
- USB cable (type B)
- Breadboard
- Jumper wires
- LEDs (various colors)
- 220Ω resistors
- Push buttons
- Buzzer (passive or active)
- Servo motor SG90
- Ultrasonic sensor HC-SR04
- LCD1602 (with or without I2C backpack)
- DHT11 temperature & humidity sensor
- PIR motion sensor
- Joystick module
- Potentiometer
- RGB LED
- Stepper motor + ULN2003 driver

---

## Project Structure

```
vibe-arduino-11/
├── README.md               ← you are here (English)
├── README_HE.md            ← Hebrew version
├── PROJECTS.md             ← list of all projects (English)
├── PROJECTS_HE.md          ← list of all projects (Hebrew)
└── projects/
    ├── 01_blink_led/       ← Project 1: Blinking LED
    ├── 02_button_led/      ← Project 2: Button-controlled LED
    └── 03_buzzer_melody/   ← Project 3: Buzzer melody
```

Each project folder contains:
- `README.md` — wiring table + explanation (English)
- `README_HE.md` — wiring table + explanation (Hebrew)
- `*.ino` — ready-to-upload Arduino code

---

## How to Start?

1. Download [Arduino IDE](https://www.arduino.cc/en/software)
2. Connect Arduino to your computer with USB cable
3. Open the `.ino` file of the project you chose
4. Select **Tools → Board → Arduino Mega 2560**
5. Select the correct port under **Tools → Port**
6. Click the **Upload** button (right arrow)
7. Have fun!

---

## Safety Rules

- Never connect motors directly to Arduino pins — always use a driver board
- Always use a **220Ω resistor** with LEDs
- Do NOT connect relay to mains (wall socket) electricity
- Ask a grown-up before connecting anything to more than 5V

---

## Projects

| # | English Name | Difficulty |
|---|--------------|------------|
| 01 | Blinking LED | ⭐ |
| 02 | Button LED | ⭐ |
| 03 | Buzzer Melody | ⭐⭐ |

> More projects coming soon!

---

Made with ❤️ for curious kids who love to build things.
