#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

string getMoistureState(int moisture) {
    if (moisture < 30)
        return "DRY";
    else if (moisture <= 70)
        return "NORMAL";
    else
        return "WET";
}

int main() {

    int probe0 = 45;
    int probe1 = 55;
    int probe2 = 80;

    cout << "Smart Agriculture Soil Moisture Simulator\n";
    cout << "Press Ctrl+C to stop.\n\n";

    while (true) {

        cout << "Probe 0: " << probe0 << "% - "
             << getMoistureState(probe0) << endl;

        cout << "Probe 1: " << probe1 << "% - "
             << getMoistureState(probe1) << endl;

        cout << "Probe 2: " << probe2 << "% - "
             << getMoistureState(probe2) << endl;

        cout << "--------------------------\n";

        // Simulate natural changes in soil moisture
        probe0 -= 5;

        if (probe0 < 20)
            probe0 = 45;

        this_thread::sleep_for(chrono::seconds(2));
    }

    return 0;
}