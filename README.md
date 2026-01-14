# ⚙️ Arduino Practice Labs – Leon Serka

This repository contains a collection of **Arduino lab exercises** created as part of the **Microcontroller Programming and Embedded Systems** course.  
Each `.ino` file represents an independent lab task focused on learning sensors, actuators, control logic, and basic automation.  

---

## 📘 Overview

The labs cover the foundations of Arduino programming — from basic input/output operations to more advanced concepts like sensor data processing, motor control, and automation logic.

All exercises are implemented in **C/C++ using the Arduino IDE**.

---

## 🧩 Topics Covered

- 🔌 **Digital & Analog I/O** – reading sensors and controlling outputs  
- 💡 **LED and Button Control** – digital pin operations and debounce handling  
- 🌡️ **Sensors** – temperature, light, and distance sensors
- 📟 **Displays** – controlling LCD 16x2 screens and 7-segment displays
- ⚙️ **Servo & Motor Control** – PWM and position control logic
- 📶 **Bluetooth Communication** – Wireless control and data transfer using HC-05/HC-06 modules
- ⏱️ **Timing and Delays** – using `delay()` and `millis()` for control flow  
- 🔁 **Loops & Conditional Logic** – automation and real-time responses  
- 🔊 **Buzzer & Sound** – generating tones for notifications  
- 🔆 **Future Project:** Solar Tracking System using **LDR sensors** and **servo motors**  

---

## 🗂️ Project Structure

```
arduino-practice/
├── practice1/                         # Basic Arduino labs
│   ├── L2Z1Serka.ino                  # Basic LED blink
│   ├── L2Z2Serka.ino                  # SOS Morse code signal
│   ├── L2Z3Serka.ino                  # Morse code name display ("Leon Serka")
│   ├── L2Z4Serka.ino                  # Serial monitor "Hello World"
│   ├── L2Z5Serka.ino                  # Simulated weather station (Serial output)
│
├── practice2/                         # Intermediate labs
│   ├── L3Z1LeonSerka.ino              # PWM LED brightness control
│   ├── L3Z2LeonSerka.ino              # Fading LED with power calculations
│   ├── L3Z4LeonSerka.ino              # LED Chaser / Running light effect
│
├── practice3/                         # Advanced Inputs
│   ├── L40Z1-Z3LeonSerka.ino          # Button counter logic
│   ├── L40Z4-Z5LeonSerka.ino          # Potentiometer mapping to PWM output
│
├── practice4/                         # Repetition & Reinforcement
│   ├── L40Z1-Z3LeonSerka.ino          # (Review) Digital inputs
│   ├── L40Z4-Z5LeonSerka.ino          # (Review) Analog inputs
│
├── practice5_6/                       # Motors & Actuators
│   └── L6Z4SerkaLeon.ino              # Servo motor sweep sequence (90°-120°-60°)
│
├── practice7/                         # Display Technologies
│   ├── L7Z2LeonSerka.ino              # 7-Segment display multiplexing
│   ├── L7Z3LeonSerka.ino              # 7-Segment speed control via Potentiometer
│   ├── L7Z5LeonSerka.ino              # LCD 16x2 text scrolling ("Leon Serka")
│
├── practice8_9/                       # Advanced Sensors & Environment
│   ├── L8Z5LeonSerka.ino              # Battery Voltage Monitor (0-15V) with warnings
│   ├── L9Z2LeonSerka.ino              # DHT11 Temperature & Humidity Reading
│   ├── L9Z4LeonSerka.ino              # "Clothing Advisor" logic based on Temperature
│   ├── L9Z5LeonSerka.ino              # Scrolling weather info on LCD
│
├── Practice10/                        # LCD & Serial Communication
│   ├── L10Z1LeonSerka.ino             # LCD basic usage
│   ├── L10Z2LeonSerka.ino             # LCD advanced features
│   ├── L10Z3LeonSerka.ino             # LCD with sensors
│   ├── L10Z5LeonSerka.ino             # Distance sensor with LCD display
│   ├── L10Z6LeonSerka.ino             # LCD data visualization
│   └── L10Z7LeonSerka.ino             # PIN verification system (LCD + Serial Monitor)
│
├── practice11/                        # Wireless Communication (Bluetooth)
│   ├── L11Z1LeonSerka.ino             # Bluetooth LED Control (On/Off)
│   ├── L11Z3LeonSerka.ino             # Bluetooth Command Handling
│   ├── L11Z7LeonSerka.ino             # Sending incrementing data to Smartphone
│   ├── L11Z9LeonSerka.ino             # Displaying Bluetooth messages on LCD
│   └── L11Z11LeonSerka.ino            # Wireless Humidity Monitor (DHT to Bluetooth)
│
├── solar_tracker/                     # Future project
│   └── (to be added)                  # Solar tracking system files
│
└── README.md                          # Main documentation file

```

*(File names reflect lab numbering used in the course.)*

---

## 🚀 How to Run the Labs

1️⃣ **Install Arduino IDE**  
   Download from [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software).

2️⃣ **Open the desired `.ino` file**  
   Each file is standalone and can be uploaded individually.

3️⃣ **Select your board and port**  
   - Board: *Arduino UNO (or compatible)*  
   - Port: *COMx* (check via Tools → Port)

4️⃣ **Upload and test the circuit**  
   Connect the required components based on lab documentation or in-code comments.

---

## 🔧 Components Used – Solar Tracking Project

The solar tracking system is built using the following components:

| Component | Description |
|------------|-------------|
| ☀️ **Solar Panel** | Main power source and light detection surface |
| 🧠 **Arduino UNO / Compatible Board** | Central microcontroller for sensor reading and servo control |
| ⚙️ **Dual-axis Servo Motors (x2)** | Provide movement in horizontal and vertical axes |
| 🌞 **LDR Sensors (x4)** | Detect sunlight intensity from different directions |
| ⚡ **INA219 I2C Power Sensor** | Monitors current and voltage from the solar panel |
| 📶 **ESP8266 Wi-Fi Module** | Enables wireless communication / data upload (e.g., IoT integration) |
| 🌡️ **DHT22 Temperature & Humidity Sensor** | Measures environmental conditions |
| ⏰ **DS3231 Real Time Clock (RTC)** | Provides accurate timekeeping for data logging |
| 🔋 **2 × 18650 Batteries + Holder** | Power supply backup for autonomous operation |
| 💡 **Breadboard** | For circuit prototyping and sensor connections |
| 🔌 **Jumper Wires (Male–Male / Male–Female)** | Used to connect all components on the breadboard |
| 🔩 **Acrylic Mounting Frame** | Mechanical support structure for the solar tracking panel |
| 🔧 **Metal Standoffs, Screws & Nuts** | Hardware for assembly stability |
| 🧰 **USB Cable + Power Adapter** | For uploading code and powering the Arduino |
| 🧾 **I2C Sensor Expansion Board (Optional)** | Simplifies multiple I2C device connections |
| 📟 **Digital Display Module** | Shows voltage/current or system status in real time |

---

### ⚙️ Function Overview

- **Automatic Sun Tracking** – LDR sensors detect light intensity, and servos adjust the panel’s position accordingly  
- **Environmental Monitoring** – DHT22 measures temperature and humidity  
- **Power Tracking** – INA219 measures solar panel output voltage and current  
- **Time Logging** – DS3231 records timestamps for collected data  
- **Connectivity (ESP8266)** – Optional module for sending data to the cloud or web dashboard  
- **Energy Efficiency** – Dual-axis control maximizes solar energy capture throughout the day  

---

## 🎯 Learning Objectives

- Gain hands-on experience with Arduino programming  
- Understand digital and analog I/O operations  
- Learn to use sensors and actuators in real applications  
- Develop problem-solving skills in embedded environments  
- Prepare for larger automation projects (e.g., Solar Tracker)  

---

## 🧠 Technologies Used

- 🖥️ **Arduino IDE**  
- ⚙️ **C / C++ Programming Language**  
- 🔌 **Electronics Components (sensors, servos, LEDs, buzzers)**  
- 🧩 **Breadboard Prototyping**

---

## 🚧 Upcoming Additions

- 🌞 **Solar Tracking Project** – automatic sunlight tracking using LDR sensors  

---

## 📄 License

This repository is open-source and intended for **educational and personal learning** purposes.

---

## ✍️ Author

**Leon Serka**  
[https://github.com/leonserka](https://github.com/leonserka)
