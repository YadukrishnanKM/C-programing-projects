#include <stdio.h> // Input output header

int main()
{
    float distance; // Initiate diatance variable

    printf("Enter the diatance in km : ");
    scanf("%f", &distance); // Scan for diatance

    float meter = distance * 1000;   // convert diatance to meter and store it in the variale meter
    float centi_meter = meter * 100; // convert the meter to centi meter and store it in the variable centi_meter

    printf("The distance is %.2f km and %.2f m and %.2f cm", distance, meter, centi_meter);

    return 0;
}