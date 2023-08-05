// C Program to demonstrate array initialization
#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 30, 40, 50}; // array initialization using initialier list

    /* array initialization using initializer list
    withoutspecifying size*/

    int arr1[] = {1, 2, 3, 4, 5};

    // array initialization using for loop

    int i = 0;
    int arr2[5];
    for (i = 0; i < 10; i++)
    {
        arr2[i] = i + 1;
        printf("%d \t", arr2[i]);
    }
    return 0;
}
