#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct SoilSensor {
    string id;
    string zone;
    int moisture;
};

string getState(int moisture) {
    if (moisture < 30)
        return "DRY";
    else if (moisture <= 70)
        return "NORMAL";
    else
        return "WET";
}

int main() {

    vector<SoilSensor> sensors = {
        {"probe0", "Zone 1", 25},
        {"probe1", "Zone 2", 55},
        {"probe2", "Zone 3", 80}
    };

    cout << "Smart Agriculture Soil Moisture Simulator\n";
    cout << "------------------------------------------\n";

    for (const auto& sensor : sensors) {

        cout << sensor.id
             << " | "
             << sensor.zone
             << " | Moisture: "
             << sensor.moisture
             << "% | State: "
             << getState(sensor.moisture)
             << endl;
    }

    return 0;
}
