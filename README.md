# 🌱 Smart Agricultural Soil-Moisture Multi-Node Gateway

A C++ based smart agriculture prototype that simulates multiple soil-moisture sensors and automatically determines irrigation requirements based on soil moisture levels.

## 📌 Project Overview

The system simulates three soil-moisture sensors installed in different agricultural zones.

Each sensor provides a soil moisture value between **0% and 100%**. Based on the moisture level, the system classifies the soil condition and decides whether the irrigation pump should be turned ON or OFF.

## 🌱 Sensor Configuration

| Sensor | Zone | Moisture |
|--------|------|----------|
| probe0 | Zone 1 | 25% |
| probe1 | Zone 2 | 55% |
| probe2 | Zone 3 | 80% |

## 💧 Moisture Classification

| Moisture | State | Pump |
|----------|-------|------|
| 0–29% | DRY | ON |
| 30–70% | NORMAL | OFF |
| 71–100% | WET | OFF |

### Example

```text
probe0 → 25% → DRY → Pump ON
probe1 → 55% → NORMAL → Pump OFF
probe2 → 80% → WET → Pump OFF

### System Architecture

Virtual Soil Sensors
        ↓
    C++ Gateway
        ↓
Moisture Classification
        ↓
    State Pattern
        ↓
   DRY / NORMAL / WET
        ↓
 Irrigation Decision
        ↓
    Pump ON / OFF 
