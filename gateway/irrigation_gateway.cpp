#include <iostream>
#include <vector>
using namespace std;

class IrrigationState {
public:
    virtual void handle(int moisture) = 0;
    virtual ~IrrigationState() {}
};

class DryState : public IrrigationState {
public:
    void handle(int moisture) override {
        cout << "Moisture: " << moisture
             << "% -> DRY -> Pump ON" << endl;
    }
};

class NormalState : public IrrigationState {
public:
    void handle(int moisture) override {
        cout << "Moisture: " << moisture
             << "% -> NORMAL -> Pump OFF" << endl;
    }
};

class WetState : public IrrigationState {
public:
    void handle(int moisture) override {
        cout << "Moisture: " << moisture
             << "% -> WET -> Pump OFF" << endl;
    }
};

class IrrigationEngine {
public:
    void process(int moisture) {
        if (moisture < 30) {
            DryState state;
            state.handle(moisture);
        }
        else if (moisture <= 70) {
            NormalState state;
            state.handle(moisture);
        }
        else {
            WetState state;
            state.handle(moisture);
        }
    }
};

int main() {

    vector<int> moisture = {25, 55, 80};

    cout << "Smart Agriculture Irrigation Gateway\n";
    cout << "------------------------------------\n";

    IrrigationEngine engine;

    for (int value : moisture) {
        engine.process(value);
    }

    return 0;
}
