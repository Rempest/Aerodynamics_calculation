#include "AerodynamicsCalculation.h"
#include <cmath>
AerodynamicsCalculation::AerodynamicsCalculation(
    double CL, double CD, double CT,
    double rho, double v, double S,
    double w, double m, double g)
{
    this->CL = CL;
    this->CD = CD;
    this->CT = CT;

    this->rho = rho;
    this->v = v;
    this->S = S;
    this->w = w;
    this->m = m;
    this->g = g;
}


void AerodynamicsCalculation::setLiftCoefficient(double value) { CL = value; }
void AerodynamicsCalculation::setDragCoefficient(double value) { CD = value; }
void AerodynamicsCalculation::setThrustCoefficient(double value) { CT = value; }

void AerodynamicsCalculation::setAirDensity(double value) { rho = value; }
void AerodynamicsCalculation::setVelocity(double value) { v = value; }
void AerodynamicsCalculation::setArea(double value) { S = value; }
void AerodynamicsCalculation::setAngularVelocity(double value) { w = value; }
void AerodynamicsCalculation::setMass(double value) { m = value; }
void AerodynamicsCalculation::setGravity(double value) { g = value; }


double AerodynamicsCalculation::getLiftCoefficient() const { return CL; }
double AerodynamicsCalculation::getDragCoefficient() const { return CD; }
double AerodynamicsCalculation::getThrustCoefficient() const { return CT; }

double AerodynamicsCalculation::getAirDensity() const { return rho; }
double AerodynamicsCalculation::getVelocity() const { return v; }
double AerodynamicsCalculation::getArea() const { return S; }
double AerodynamicsCalculation::getAngularVelocity() const { return w; }
double AerodynamicsCalculation::getMass() const { return m; }
double AerodynamicsCalculation::getGravity() const { return g; }
double AerodynamicsCalculation::calculateLift() const {
    return CL * 0.5 * rho * std::pow(v, 2) * S;
}

double AerodynamicsCalculation::calculateDrag() const {
    return CD * 0.5 * rho * std::pow(v, 2) * S;
}

double AerodynamicsCalculation::calculateThrust() const {
    return CT * std::pow(w, 2);
}

double AerodynamicsCalculation::calculateWeight() const {
    return m * g;
}

bool AerodynamicsCalculation::isHoverCondition() const {
    return std::abs(calculateThrust() - calculateWeight()) < 1e-3;
}
