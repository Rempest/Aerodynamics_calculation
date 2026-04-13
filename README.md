# ✈️ UAV Aerodynamics Calculator

A simple C++ program for basic aerodynamic calculations of an unmanned aerial vehicle (UAV).

## 📌 Features

The program allows you to calculate:

* **Lift (L)**
* **Drag (D)**
* **Thrust (T)**
* **Weight (W)**

It also provides a basic comparison between thrust and weight to determine UAV behavior:

* Takeoff
* Hover
* Falling

---

## 🧮 Formulas Used

* **Lift:**
  `L = CL * 0.5 * ρ * V² * S`

* **Drag:**
  `D = CD * 0.5 * ρ * V² * S`

* **Thrust:**
  `T = CT * ω²`

* **Weight:**
  `W = m * g`

Where:

* `CL` — Lift coefficient
* `CD` — Drag coefficient
* `CT` — Thrust coefficient
* `ρ (p)` — Air density (kg/m³)
* `V` — Velocity (m/s)
* `S` — Wing area (m²)
* `ω (w)` — Propeller angular velocity
* `m` — Mass (kg)
* `g` — Gravity (9.8 m/s²)

---

## 🛠️ Project Structure

```
.
├── Calculation.cpp 
├── README.md
├── interface.h
└── main.cpp 
```

---

## ▶️ How to Compile and Run

### Using g++

```bash
g++ main.cpp  Calculation.cpp -o uav_calc
./uav_calc
```

---

## 💡 Example Usage

```
What do you want to find? (W, T, D, L): L
CL: 1.2
V: 10.0
p: 1.2
S: 0.5

Lift (L) = 36
```

---

## 🚀 Future Improvements

* Add full flight condition analysis (automatic T vs W check)
* Create graphical interface (GUI)
* Add unit conversion system
* Improve input validation
* Support for real UAV parameters

---

## 📚 Technologies

* C++
* Standard Library (`<iostream>`, `<cmath>`)

---

## 👨‍💻 Author

Raempest(Rempest)
---

## 📄 License

This project is open-source and free to use.
