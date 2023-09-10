/* 11.Develop a program using pointers to compute the sum, mean and standard
 deviation of all elements stored in an array of N real numbers.*/

#include <stdio.h>

int main()
{
    float a[50], *ptr, mean, std, sum = 0, sums = 0;
    int n, i;
    printf("enter the number of elements in an array \n");
    scanf("%d", &n);
    printf("enter the array elements \n");
    for (i = 0; i < n; i++)
        scanf("%f", &a[i]);
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    mean = sum / n;
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sums = sums + pow((*ptr - mean), 2);
        ptr++;
    }
    std = sqrt(sums / n);
    printf("sum=%f\n", sum);
    printf("mean=%f\n", mean);
    printf("standard deviation =%f\n", std);
    getchar();
}