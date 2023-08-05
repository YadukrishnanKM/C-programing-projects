// C Program to illustrate 2d array

#include <stdio.h>

int main()
{

    int arr[2][3] = {{10, 20, 30}, {40, 50, 60}}; // declaring and initializing 2d array

    printf("2D Array:\n");

    // printing 2d array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // new array
    printf("\nnew array\n\n");
    int arry_2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int t;
            scanf("%d ", &t);
            arry_2[i][j] = t;
        }
        scanf("\n"); //.
    }

    // print new array
    printf("\nNew array is : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arry_2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
