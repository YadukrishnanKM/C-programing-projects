// 7. Compute sin(x)/cos(x) using Taylor series approximation. Compare your result
// with the built-in library function. Print both the results with appropriate
// inferences.

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.1426
void main()
{
    int i, n;
    float x, sum, term, degree;
    printf("enter n value\n");
    scanf("%d", &n);
    printf("enter degree\n");
    scanf("%f", &degree);
    // converting degrees to radians
    x = (degree * PI) / 180;
    printf("degree in radians %f\n", x);
    term = x;
    sum = term;
    for (i = 3; i <= n; i += 2)
    {
        term = (-term * x * x) / (i * (i - 1));
        sum = sum;
    }
    printf("sin(x) using taylor series approximation is sin(%f)=%f\n", degree, sum);
    printf("sin(x) using taylor series approximation using library function sin(%f)=%f\n", degree, sin(x));
    getch();
}
