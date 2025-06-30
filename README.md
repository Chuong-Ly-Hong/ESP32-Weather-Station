
# Environmental Weather Monitoring Station using ESP32 and Low-Cost Sensors

## 📌 Project Overview

This project aims to build an affordable, compact **Weather Monitoring Station** suitable for home use. The system uses an **ESP32 microcontroller** and common sensors to measure environmental parameters such as:

- 🌡️ Temperature  
- 💧 Humidity  
- 🌞 Light intensity  
- 🌧️ Rainfall   

All data is collected via WiFi and displayed on a mobile app (**Blynk IoT**).

---

## 🎯 Project Goals

- Create a low-cost, easy-to-install weather station
- Collect real-time environmental data
- Display sensor data visually on a mobile dashboard

---

## 📚 Technologies Used

- **Hardware:**
  - ESP32 NodeMCU
  - DHT22 (Temperature & Humidity sensor)
  - LM393 LDR (Light sensor)
  - MH-RD Rainfall sensor

- **Software:**
  - Arduino IDE (ESP32 Programming)
  - Blynk IoT Platform (Mobile Dashboard)
  - WiFi communication (TCP/IP over ESP32)

---

## 🚀 Setup Instructions

### 1. Hardware Setup

- Connect sensors to ESP32 as per circuit diagrams (Check `/hardware/` folder or schematic image if uploaded).
- Power the ESP32 using USB or external 5V source.

### 2. Software Setup

- Open Arduino IDE
- Install **ESP32 board support** and required libraries:
  - `BlynkSimpleEsp32.h`
  - `DHT.h`
  - `WiFi.h`
- Configure your Blynk Auth Token, WiFi SSID, and password in the code.

### 3. Upload Code

- Open `/src/weather_station.ino` (or your main `.ino` file)
- Compile and upload to ESP32

### 4. Mobile App Setup (Blynk IoT)

- Download **Blynk IoT** app (iOS/Android)
- Create a new project using your **Template ID** and **Auth Token**
- Add widgets for:
  - Temperature (V0)
  - Humidity (V1)
  - Rainfall (V2)
  - Light status (V3 LED Widget)

---

## ✅ Test Scenarios

- **Temperature change:** Blow hot air on DHT22 → Observe app updates
- **Rain detection:** Pour water on rain sensor → App updates rainfall level
- **Light detection:** Cover/uncover LDR → LED widget changes on app

---

## ✅ Results

- Data updates in real-time on Blynk app
- Low latency
- Successfully tested in home environment

---

## ⚡ Future Improvements

- Optimize power consumption
- Add more sensors (CO₂, PM2.5, etc.)
- Develop custom mobile app
- Integrate data logging and cloud storage
- Add machine learning for weather prediction

---

## 👨‍💻 Team Members

- **Ly Hong Chuong** - [Student ID: 21520167]  
- **Thai Binh Duong Nguyen** - [Student ID: 21521206]  

**Instructor:** Th.S Nguyễn Duy Xuân Bách

---

## 📅 Timeline  
**Feb 19, 2024 → June 8, 2024**

---

## 📎 References

- [National Meteorological Monitoring Network (Vietnam)](https://veia.com.vn/mang-luoi-quan-trac-cua-trung-tam-khi-tuong-thuy-van-quoc-gia)
- [How to Make a Weather Monitoring System with ESP32](https://srituhobby.com/how-to-make-a-weather-monitoring-system-with-esp32-board/)
