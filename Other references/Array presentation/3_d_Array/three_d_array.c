// C Program to illustrate the 3d array
#include <stdio.h>
#define n 3

int main()
{

    int arr[n][n][n] = {{{1, 1, 1}, {2, 2, 2}, {3, 3, 3}},
                        {{4, 4, 4}, {5, 5, 5}, {6, 6, 6}},
                        {{7, 7, 7}, {8, 8, 8}, {9, 9, 9}}}; // 3D array declaration

    // printing elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n \n");
    }
    return 0;
}
