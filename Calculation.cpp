#include <iostream>   // Provides input/output functionality (cin, cout)
#include <cmath>      // Provides mathematical functions like pow()
#include "AerodynamicsCalculation.h" // Header file with class declaration

using namespace std; // Allows us to use cout/cin without std:: prefix

// Function to calculate Lift force (L)
// Formula: L = CL * 0.5 * p * V^2 * S
double AerodynamicsCalculation::calculateLift() {
    // CL - lift coefficient
    // p  - air density
    // v  - velocity
    // S  - wing area
    // pow(v, 2) = velocity squared
    return CL * 0.5 * p * pow(v, 2) * S;
}

// Function to calculate Drag force (D)
// Formula: D = CD * 0.5 * p * V^2 * S
double AerodynamicsCalculation::calculateDrag() {
    // CD - drag coefficient
    // Uses same aerodynamic dynamic pressure term as lift
    return CD * 0.5 * p * pow(v, 2) * S;
}

// Function to calculate Thrust (T)
// Formula: T = CT * w^2
double AerodynamicsCalculation::calculateThrust() {
    // CT - thrust coefficient
    // w  - angular velocity of propeller
    return CT * pow(w, 2);
}

// Function to calculate Weight (W)
// Formula: W = m * g
double AerodynamicsCalculation::calculateWeight() {
    // m - mass of UAV
    // g - gravitational acceleration (≈9.8 m/s^2)
    return m * g;
}

// Main program logic function
void AerodynamicsCalculation::run() {

    // Ask user what they want to calculate
    cout << "What do you want to find? (W, T, D, L): ";
    
    // Read user choice (single character)
    cin >> self;

    // -------- LIFT CALCULATION --------
    if (self == 'L') {

        // Input required parameters for lift
        // Order: CL (coefficient), velocity, density, area
        cin >> CL >> v >> p >> S;

        // Call function to compute lift
        L = calculateLift();

        // Output result
        cout << "L = " << L << endl;
    }

    // -------- THRUST CALCULATION --------
    else if (self == 'T') {

        // Input thrust coefficient and angular velocity
        cin >> CT >> w;

        // Compute thrust
        T = calculateThrust();

        // Output result
        cout << "T = " << T << endl;
    }

    // -------- DRAG CALCULATION --------
    else if (self == 'D') {

        // Input drag coefficient, velocity, density, and area
        cin >> CD >> v >> p >> S;

        // Compute drag
        D = calculateDrag();

        // Output result
        cout << "D = " << D << endl;
    }

    // -------- WEIGHT CALCULATION --------
    else if (self == 'W') {

        // Input mass of UAV
        cin >> m;

        // Compute weight
        W = calculateWeight();

        // Output result
        cout << "W = " << W << endl;
    }

    // -------- INVALID INPUT --------
    else {
        // If user enters something else
        cout << "Invalid input!" << endl;
    }
}
