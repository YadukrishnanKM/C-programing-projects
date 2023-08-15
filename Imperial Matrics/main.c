#include <stdio.h>
#include "imperial.h"
#include "Matrics.h"

void main()
{

    printf("The convertion is : \n\n");
    float s[5] = {1, 2, 3, 4, 5}; // miles
    mile(s, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%f meter\n\n", s[i]);
    }

    printf("\n\nThe second convertion is : \n\n");
    float t[5] = {1, 2, 3, 4, 5}; // kg
    kilo_gram(t, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%f pound\n\n", t[i]);
    }
}