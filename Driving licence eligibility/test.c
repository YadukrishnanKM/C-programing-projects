#include <stdio.h>

int main()
{
    int age;
    char has_driving_license, has_clean_driving_record;

    // Taking user input for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Taking user input for driving license
    printf("Do you have a driving license? (y/n): ");
    scanf(" %c", &has_driving_license);

    // Taking user input for driving record
    printf("Do you have a clean driving record? (y/n): ");
    scanf(" %c", &has_clean_driving_record);

    // Checking eligibility
    if (age >= 18 && has_driving_license == 'y' && has_clean_driving_record == 'y')
    {
        printf("You are eligible for insurance.\n");
    }
    else
    {
        printf("You are not eligible for insurance.\n");
    }

    return 0;
}