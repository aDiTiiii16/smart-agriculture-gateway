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

    int probe0[] = {45, 40, 35, 30, 25};
    int probe1[] = {55, 55, 54, 56, 55};
    int probe2[] = {80, 78, 82, 80, 81};

    cout << "Smart Agriculture Soil Moisture Simulator\n\n";

    for (int i = 0; i < 5; i++) {

        cout << "Probe 0: " << probe0[i] << "% - "
             << getMoistureState(probe0[i]) << endl;

        cout << "Probe 1: " << probe1[i] << "% - "
             << getMoistureState(probe1[i]) << endl;

        cout << "Probe 2: " << probe2[i] << "% - "
             << getMoistureState(probe2[i]) << endl;

        cout << "--------------------------\n";

        this_thread::sleep_for(chrono::seconds(2));
    }

    return 0;
}