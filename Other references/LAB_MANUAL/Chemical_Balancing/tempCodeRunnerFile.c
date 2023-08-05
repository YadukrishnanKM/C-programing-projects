#include <stdio.h> //header file

int x, y, p, q, b1, b2, b3; // Initiate the variables

void main()
{
    printf("Enter the chemical equation values: ");

    scanf("%d %d %d %d", &x, &y, &p, &q);

    /*
    printf("\n\tx : ");
    scanf("%d", &x); // scan for the variable x
    printf("\ty : ");
    scanf("%d", &y); // scan for the variable y
    printf("\tz : ");
    scanf("%d", &x); // scan for the variable p
    printf("\tq : ");
    scanf("%d", &q); // scan for the variable q
    */

    //////////////////////////////////////////////////////////////
    if ((p % x == 0) && (q % y == 0))
    {
        b1 = p / x;
        b2 = q / y;
        b3 = 1;
    }
    else
    {
        p = p * y;
        q = q * x;
        b3 = x * y;
        int temp = g_cd(p, g_cd(q, b3));                  // Find GCD and store in the variable temp
        b1 = p / temp;                                    // divide p by GCD(temp)
        b2 = q / temp;                                    // divide q by GCD(temp)
        b3 = b3 / temp;                                   // divide b3 by GCD(temp)
        printf("\nb1 = %d\tb2 =%d\tb3=%d\n", b1, b2, b3); // print the answer
    }
    ///////////////////////////////////////////////////////////////
}

int g_cd(int a, int b) // Program to find GCD
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return g_cd(b, a % b);
    }
}