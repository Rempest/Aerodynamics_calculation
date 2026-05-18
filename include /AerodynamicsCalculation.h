#ifndef AERODYNAMICS_CALCULATION_H
#define AERODYNAMICS_CALCULATION_H

// Class that represents a simple aerodynamic calculator
// for an Unmanned Aerial Vehicle (UAV)
// It provides methods to compute Lift, Drag, Thrust, and Weight
class AerodynamicsCalculation {
public:

    // -------------------- PHYSICAL PARAMETERS --------------------

    // CL - Lift coefficient (dimensionless)
    // Represents how effectively the wing generates lift
    double CL;

    // CD - Drag coefficient (dimensionless)
    // Represents aerodynamic resistance
    double CD;

    // CT - Thrust coefficient (dimensionless)
    // Used in thrust calculation for propeller systems
    double CT;

    // p (rho) - Air density (kg/m^3)
    double p;

    // v - Air velocity relative to UAV (m/s)
    double v;

    // S - Wing/reference area (m^2)
    double S;

    // w - Angular velocity of propeller (rad/s)
    double w;

    // m - Mass of UAV (kg)
    double m;

    // g - Gravitational acceleration (m/s^2)
    // Typically ~9.8 m/s^2 on Earth
    double g;

    // -------------------- RESULT VARIABLES --------------------

    // L - Lift force (Newtons)
    double L;

    // D - Drag force (Newtons)
    double D;

    // T - Thrust force (Newtons)
    double T;

    // W - Weight force (Newtons)
    double W;

    // -------------------- CONTROL VARIABLE --------------------

    // self - user input character
    // Determines which parameter to calculate (L, D, T, W)
    char self;

    // -------------------- METHODS --------------------

    // Main method that runs the program:
    // - asks user for input
    // - selects calculation
    // - prints result
    void run();

    // Calculates Lift force using formula:
    // L = CL * 0.5 * p * V^2 * S
    double calculateLift();

    // Calculates Drag force using formula:
    // D = CD * 0.5 * p * V^2 * S
    double calculateDrag();

    // Calculates Thrust using formula:
    // T = CT * w^2
    double calculateThrust();

    // Calculates Weight using formula:
    // W = m * g
    double calculateWeight();
};

// End of include guard
#endif
