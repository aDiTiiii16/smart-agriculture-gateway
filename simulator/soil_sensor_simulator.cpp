#include <iostream>
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

    int probe0 = 25;
    int probe1 = 55;
    int probe2 = 80;

    cout << "Smart Agriculture Soil Moisture Simulator\n\n";

    cout << "Probe 0: " << probe0 << "% - "
         << getMoistureState(probe0) << endl;

    cout << "Probe 1: " << probe1 << "% - "
         << getMoistureState(probe1) << endl;

    cout << "Probe 2: " << probe2 << "% - "
         << getMoistureState(probe2) << endl;

    return 0;
}