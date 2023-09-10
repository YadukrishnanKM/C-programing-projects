#include <stdio.h>
#include <conio.h>
void main()
{
    int n, a[20], i, j, temp;
    printf("Enter number of array elements\n");
    scanf("%d", &n);
    printf("enter array elements to sort\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array elements before sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("array elements after sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}