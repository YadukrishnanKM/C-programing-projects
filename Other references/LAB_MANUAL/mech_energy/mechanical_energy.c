/*

    Mechanical Energy = Kinetic Energy + Potntial Energy
    Kinetic Energy = 0.5 x mass x velocity²
    Potential Energy = mass x gravity of Earth x distance

    Energy in eV = Energy in Jules / 1.602x10⁻¹²

*/

#include <stdio.h> // input output header

float gravity = 9.8; // Earth's gravity

int Power(double base, int power) // Program to calculate the power of a value : base^power
{

    int int_out = 1;

    for (int ref = 0; ref <= (power - 1); ref++)
    {
        int_out = int_out * base;
    }

    return int_out;
}

int mech_engy(double mass, double velocity, double distance) // Program to calculate Mechanical Energy
{
    double Energy;                                                              // Initiate the variable to store the value of Energy calculated
    double EeV;                                                                 // Initiate the variable to store the Energy in electron volts
    Energy = ((mass * gravity * distance) + (0.5 * mass * Power(velocity, 2))); // Initiate the calculation
    EeV = Energy / (1.602 * Power(10, -12));                                    // Conversion to Electron volts
    return EeV;
}

int main() // Main will start from here
{
    double mass;     // Initiate variable to store value of mass
    double velocity; // Initiate the variable to store the value
    double distance; // Initiate teh variable to store the value of distance
    double cal;      // Initiate the variable to store the value of final solution

    printf("\nEnter the value of mass in kg : ");
    scanf("%lf kg", &mass); // scan for mass
    printf("\nEnter the value of velocity in ms : ");
    scanf("%lf ms", &velocity); // scan for velocity
    printf("\nEnter the value of Didtance in meters : ");
    scanf("%lf m", &distance); // scan for distance

    cal = mech_engy(mass, velocity, distance); // declare the variables in the function

    // print out the answer
    printf("\nThe Mechanical Energy of the object with mass %.2lf kg and velocity %.2lf m/s and at distance %.2lf m is : %.2lf eV", mass, velocity, distance, cal);
}