# Smart Agricultural Soil-Moisture Multi-Node Gateway

## 1. Virtual Sensor Definition

The system simulates multiple soil-moisture sensors instead of using physical sensors.

Each virtual sensor represents the moisture level of a different agricultural zone.

### Sensors

| Sensor | Zone | Measurement |
|--------|------|-------------|
| probe0 | Zone 1 | Soil moisture (%) |
| probe1 | Zone 2 | Soil moisture (%) |
| probe2 | Zone 3 | Soil moisture (%) |

## 2. Measurement Range

Soil moisture is represented as a percentage from 0% to 100%.

- 0% = Completely dry
- 100% = Completely wet

## 3. Moisture Classification

| Moisture | State |
|----------|-------|
| 0–29% | DRY |
| 30–70% | NORMAL |
| 71–100% | WET |

## 4. Irrigation Rule

- DRY → Pump ON
- NORMAL → Pump OFF
- WET → Pump OFF

## 5. Example

probe0 = 25% → DRY → Pump ON

probe1 = 55% → NORMAL → Pump OFF

probe2 = 80% → WET → Pump OFF

## 6. Future Device Representation

The virtual sensors will eventually be exposed through Linux character devices:

/dev/probe0
/dev/probe1
/dev/probe2