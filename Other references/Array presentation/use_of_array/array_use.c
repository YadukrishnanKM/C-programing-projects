// C Program to demonstrate the use of array

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50}; // array declaration and initialization

    printf("Elements in array before : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    arr[2] = 100; // modifying element at index 2

    // traversing array using for loop
    printf("\n\nElements in Array after: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
