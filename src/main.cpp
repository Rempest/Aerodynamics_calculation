#include <iostream>
#include <limits>
#include "Aerodynamics_Calculation.h"

void printMenu() {
    std::cout << "\n===== UAV Aerodynamics Calculator =====\n";
    std::cout << "Select what you want to calculate:\n";
    std::cout << "1 - Lift (L)\n";
    std::cout << "2 - Drag (D)\n";
    std::cout << "3 - Thrust (T)\n";
    std::cout << "4 - Weight (W)\n";
    std::cout << "0 - Exit\n";
    std::cout << "======================================\n";
    std::cout << "Choice: ";
}

template<typename T>
T getInput(const std::string& prompt) {
    T value;

    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Try again.\n";
        } else {
            return value;
        }
    }
}

int main() {
    AerodynamicsCalculation aero;

    int choice;

    while (true) {
        printMenu();
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice!\n";
            continue;
        }

        if (choice == 0) {
            std::cout << "Exiting...\n";
            break;
        }

        if (choice == 1) {
            double CL = getInput<double>("Enter CL: ");
            double rho = getInput<double>("Enter air density (rho): ");
            double v = getInput<double>("Enter velocity (v): ");
            double S = getInput<double>("Enter wing area (S): ");

            aero.setLiftCoefficient(CL);
            aero.setAirDensity(rho);
            aero.setVelocity(v);
            aero.setArea(S);

            std::cout << "Lift (L) = " << aero.calculateLift() << " N\n";
        }
            
        else if (choice == 2) {
            double CD = getInput<double>("Enter CD: ");
            double rho = getInput<double>("Enter air density (rho): ");
            double v = getInput<double>("Enter velocity (v): ");
            double S = getInput<double>("Enter wing area (S): ");

            aero.setDragCoefficient(CD);
            aero.setAirDensity(rho);
            aero.setVelocity(v);
            aero.setArea(S);

            std::cout << "Drag (D) = " << aero.calculateDrag() << " N\n";
        }

        else if (choice == 3) {
            double CT = getInput<double>("Enter CT: ");
            double w = getInput<double>("Enter angular velocity (w): ");

            aero.setThrustCoefficient(CT);
            aero.setAngularVelocity(w);

            std::cout << "Thrust (T) = " << aero.calculateThrust() << " N\n";
        }

        else if (choice == 4) {
            double m = getInput<double>("Enter mass (m): ");
            double g = getInput<double>("Enter gravity (g, default 9.81): ");

            aero.setMass(m);
            aero.setGravity(g);

            std::cout << "Weight (W) = " << aero.calculateWeight() << " N\n";
        }

        else {
            std::cout << "Unknown option!\n";
        }
    }

    return 0;
}
