# Smart Agricultural Soil-Moisture Multi-Node Gateway

## 1. Project Description

A software-based agricultural monitoring system that simulates multiple soil-moisture sensors and decides when irrigation should be turned ON or OFF.

## 2. Virtual Sensors

| Sensor | Zone | Measurement |
|--------|------|-------------|
| probe0 | Zone 1 | Soil moisture (%) |
| probe1 | Zone 2 | Soil moisture (%) |
| probe2 | Zone 3 | Soil moisture (%) |

## 3. Moisture Range

Soil moisture is represented from 0% to 100%.

## 4. Moisture Classification

- 0–29% → DRY
- 30–70% → NORMAL
- 71–100% → WET

## 5. Irrigation Rules

- DRY → Pump ON
- NORMAL → Pump OFF
- WET → Pump OFF

## 6. Example

probe0 = 25% → DRY → Pump ON

probe1 = 55% → NORMAL → Pump OFF

probe2 = 80% → WET → Pump OFF

## 7. Future Linux Devices

The virtual sensors will eventually be exposed as:

/dev/probe0
/dev/probe1
/dev/probe2
