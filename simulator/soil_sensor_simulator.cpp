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

    cout << "Smart Agriculture Soil Moisture Simulator\n\n";

    for (int i = 0; i < 5; i++) {

        cout << "Probe 0: " << probe0 << "% - "
             << getMoistureState(probe0) << endl;

        probe0 -= 5;

        this_thread::sleep_for(chrono::seconds(2));
    }

    return 0;
}