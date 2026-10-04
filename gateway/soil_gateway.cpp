#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct SoilSensor {
    string id;
    string zone;
    int moisture;
};

class IrrigationState {
public:
    virtual void handle(const SoilSensor& sensor) = 0;
    virtual ~IrrigationState() {}
};

class DryState : public IrrigationState {
public:
    void handle(const SoilSensor& sensor) override {
        cout << sensor.id << " | " << sensor.zone
             << " | " << sensor.moisture
             << "% | DRY | Pump ON" << endl;
    }
};

class NormalState : public IrrigationState {
public:
    void handle(const SoilSensor& sensor) override {
        cout << sensor.id << " | " << sensor.zone
             << " | " << sensor.moisture
             << "% | NORMAL | Pump OFF" << endl;
    }
};

class WetState : public IrrigationState {
public:
    void handle(const SoilSensor& sensor) override {
        cout << sensor.id << " | " << sensor.zone
             << " | " << sensor.moisture
             << "% | WET | Pump OFF" << endl;
    }
};

class IrrigationGateway {
public:
    void process(const SoilSensor& sensor) {

        if (sensor.moisture < 30) {
            DryState state;
            state.handle(sensor);
        }
        else if (sensor.moisture <= 70) {
            NormalState state;
            state.handle(sensor);
        }
        else {
            WetState state;
            state.handle(sensor);
        }
    }
};

int main() {

    vector<SoilSensor> sensors = {
        {"probe0", "Zone 1", 25},
        {"probe1", "Zone 2", 55},
        {"probe2", "Zone 3", 80}
    };

    cout << "Smart Agricultural Soil-Moisture Gateway\n";
    cout << "-----------------------------------------\n";

    IrrigationGateway gateway;

    for (const auto& sensor : sensors) {
        gateway.process(sensor);
    }

    return 0;
}
