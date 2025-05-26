#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Declaration of the function
double calculatecharges(double);

int main() {
    double hour, currentcharges, totalcharges = 0.0, totalhours = 0.0;
    int first = 1;

    cout << "Enter the total hours parked for 3 cars:\n";

    for (int i = 1; i <= 3; i++) {
        cin >> hour;
        totalhours += hour;

        if (first) {
            cout << setw(5) << "Cars" << setw(15) << "Hours" << setw(15) << "Charge\n";
            first = 0;
        }

        currentcharges = calculatecharges(hour);
        totalcharges += currentcharges;

        cout << fixed << showpoint
             << setw(3) << i
             << setw(17) << setprecision(1) << hour
             << setw(15) << setprecision(2) << currentcharges << "\n";
    }

    cout << setw(7) << "TOTAL"
         << setw(13) << setprecision(1) << totalhours
         << setw(15) << setprecision(2) << totalcharges << "\n";

    return 0;
}

// Function to calculate parking charges
double calculatecharges(double hours) {
    double charge;

    if (hours <= 3.0) {
        charge = 2.0;
    } else if (hours < 19.0) {
        charge = 2.0 + 0.5 * ceil(hours - 3.0);
    } else {
        charge = 10.0;
    }

    return charge;
}


