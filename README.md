# Gas-Detection
# 🛑 Gas Detecting Alarm System

## 📋 Overview
This project is a gas detecting alarm system designed to identify hazardous gas levels and trigger audible or visual alerts to ensure safety. It leverages embedded sensors (like MQ-series) and a microcontroller (e.g., Arduino Uno) to monitor the environment in real-time.

## 🎯 Objectives
- Detect flammable or toxic gases using reliable sensors.
- Activate alarms when concentrations exceed threshold levels.
- Optionally log data or notify users via mobile interface or IoT integration.

## ⚙️ Components Used
- **Microcontroller:** Arduino Uno / ESP32 / similar
- **Gas Sensor:** MQ-2 / MQ-135 / MQ-7 (depending on target gases)
- **Buzzer / LED:** For alarm signaling
- **LCD / OLED display (optional):** For gas concentration display
- **Wi-Fi / Bluetooth module (optional):** For wireless alerts
- **Power Supply:** Battery pack or USB

## 🧠 How It Works
1. Sensor measures gas concentration continuously.
2. Microcontroller reads sensor data.
3. If concentration exceeds safe threshold:
   - Buzzer and/or LED activates.
   - Optional notifications sent via mobile app or cloud dashboard.
4. System resets when air clears below threshold.

## 🚀 Setup Instructions
1. Connect the sensor to analog pin (e.g., A0) and power.
2. Connect buzzer and LED to digital output pins.
3. Upload Arduino sketch from `/src/` directory.
4. Power the device and observe sensor readings on serial monitor.
5. Adjust thresholds in code as needed.

## 📁 Directory Structure
