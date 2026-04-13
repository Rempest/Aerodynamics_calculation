#include <iostream>
#include <cmath>
#include "AerodynamicsCalculation.h"
using namespace std;

double AerodynamicsCalculation::calculateLift() {
    return CL * 0.5 * p * pow(v, 2) * S;
}

double AerodynamicsCalculation::calculateDrag() {
    return CD * 0.5 * p * pow(v, 2) * S;
}

double AerodynamicsCalculation::calculateThrust() {
    return CT * pow(w, 2);
}

double AerodynamicsCalculation::calculateWeight() {
    return m * g;
}

void AerodynamicsCalculation::run() {
    cout << "What do you want to find? (W, T, D, L): ";
    cin >> self;

    if (self == 'L') {
        cin >> CL >> v >> p >> S;
        L = calculateLift();
        cout << "L = " << L << endl;
    }
    else if (self == 'T') {
        cin >> CT >> w;
        T = calculateThrust();
        cout << "T = " << T << endl;
    }
    else if (self == 'D') {
        cin >> CD >> v >> p >> S;
        D = calculateDrag();
        cout << "D = " << D << endl;
    }
    else if (self == 'W') {
        cin >> m;
        W = calculateWeight();
        cout << "W = " << W << endl;
    }
}
