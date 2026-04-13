#ifndef AERODYNAMICS_CALCULATION_H
#define AERODYNAMICS_CALCULATION_H

class AerodynamicsCalculation {
public:
    // variables
    double CL, p, v, T, W, L, D, S, g, CT, w, CD, m;
    char self;

    // methods
    void run();

    double calculateLift();
    double calculateDrag();
    double calculateThrust();
    double calculateWeight();
};

#endif
