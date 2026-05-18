#include "AerodynamicsCalculation.h" 
// Includes the class definition of AerodynamicsCalculation
// This allows us to create objects and use its methods

int main() {
    
    // Create an instance (object) of the AerodynamicsCalculation class
    // This object represents our UAV calculator
    AerodynamicsCalculation UAV;

    // Call the main execution method of the class
    // This will:
    // 1. Ask the user what they want to calculate
    // 2. Take input values
    // 3. Perform the selected aerodynamic calculation
    // 4. Output the result to the console
    UAV.run();

    // Return 0 indicates that the program finished successfully
    // This is standard for C++ main functions
    return 0;
}
