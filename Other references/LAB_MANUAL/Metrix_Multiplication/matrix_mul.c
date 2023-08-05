#include <stdio.h>
#define u 5

int main()
{
    int A[u][u], B[u][u], C[u][u], m, n, p, q, i, j, k;
    printf("enter the size of the first matrix\n");
    scanf("%d%d", &m, &n);
    printf("enter the size of the second matrix\n");
    scanf("%d%d", &p, &q);
    if (n == p)
    {
        printf("enter the elements of first matrix\n");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &A[i][j]);
        printf("enter the elements of second matrix\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
        printf("matrix A is \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("\t%d", A[i][j]);
            }

            printf("\n");
        }
        printf("matrix B is\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("\t%d", B[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }
        printf("the product of 2 matrices is \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("multiplication is not possible\n");
    }

    return 0;
}