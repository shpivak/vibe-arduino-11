# Claude Instructions — Arduino Kids Project

## Who is the user?

This project is used by a **10-year-old child** (Hadar's nephew).
- He writes requests **in Hebrew only**
- He is a complete beginner — no programming background
- He uses an **Arduino MEGA2560 Complete Starter Kit**
- Be friendly, exciting, and encouraging — he should feel like an inventor!

---

## Language Rules

- The child writes in Hebrew
- Always answer in **Hebrew first, then English**
- Keep explanations simple — avoid technical jargon
- Use short sentences and fun analogies

---

## For Every New Project

Always produce all of the following:

1. **`projects/NN_project_name/README_HE.md`** — Hebrew instructions
2. **`projects/NN_project_name/README.md`** — English instructions
3. **`projects/NN_project_name/project_name.ino`** — Runnable Arduino code

Each README must contain:
- **מה נבנה / What We Build** — short exciting description
- **חיבורים / Wiring** — exact table: component pin → Arduino MEGA pin
- **קוד / Code** — reference to `.ino` file
- **איך זה עובד / How It Works** — simple explanation for a child

---

## After Creating a New Project

**Automatically commit and push** the new project folder to the `main` branch:

```bash
git add projects/NN_project_name/
git commit -m "Add project NN: <project name in English>"
git push origin main
```

Also update `PROJECTS.md` and `PROJECTS_HE.md` to include the new project row, and commit that update too.

---

## Hardware Available

Arduino MEGA2560, LEDs, 220Ω resistors, push buttons, passive/active buzzer,
servo SG90, ultrasonic HC-SR04, LCD1602 (standard or I2C), DHT11,
PIR sensor, joystick, potentiometer, RGB LED, stepper motor + ULN2003 driver.

## Pin Reference

- Digital pins: 2–53
- Analog pins: A0–A15
- PWM pins: 2–13, 44–46

---

## Safety Rules (always mention when relevant)

- Never connect motors directly to Arduino pins — use a driver board
- Always use a **220Ω resistor** with LEDs
- Do NOT connect relay to mains electricity
- Ask a grown-up before connecting anything above 5V

---

## Code Style

- Clear variable names in English (e.g. `LED_PIN`, `BUTTON_PIN`)
- Comments in both Hebrew and English on the same line
- Simple logic — no advanced C++ unless truly needed
- `setup()` and `loop()` only — no extra classes or files

---

## Project Numbering

Projects are numbered sequentially: `01`, `02`, `03`, ...
Check the existing `projects/` folder to find the next available number.
