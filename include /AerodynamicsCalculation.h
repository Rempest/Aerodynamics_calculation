#ifndef AERODYNAMIC_CALCULATION_H
#define AERODYNAMIC_CALCULATION_H
class Aerodynamics_calculation(){
    public:
    Aerodynamics_calculation() = default
    Aerodynamics_calculation(double CL, double CD, double CT,
                             double rho, double v, double s,
                             double w, double m, double g = 9.81);
    void setLiftCoefficient(double value);
    void setDragCoefficient(double value);
    void setThrustCoefficient(double value);
    void setAirDensity(double value);
    void setVelocity(double value);
    void setArea(double value);
    void setAngularVelocity(double value);
    void setMass(double value);
    void setGravity(double value);
    
    double getLiftCoefficient() const;
    double getDragCoefficient() const;
    double getThrustCoefficient() const;

    double getAirDensity() const;
    double getVelocity() const;
    double getArea() const;
    double getAngularVelocity() const;
    double getMass() const;
    double getGravity() const;

    double calculateLift() const;
    double calculateDrag() const;
    double calculateThrust() const;
    double calculateWeight() const;

    bool isHoverCondition() const;
private:
    double CL{0.0};
    double CD{0.0};
    double CT{0.0};

    double rho{0.0};   
    double v{0.0};     
    double S{0.0};     
    double w{0.0};     
    double m{0.0};     
    double g{9.81};
        };
#endif
