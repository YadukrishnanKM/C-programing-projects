#include <stdio.h>

void MatrixElements(int matrix[][10], int row, int column)
{

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void display_Matrix(int result[][10], int row, int column)
{

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            printf("%d  ", result[i][j]);
            if (j == column - 1)
                printf("\n");
        }
    }
}

void multiply_Matrices(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            for (int k = 0; k < c1; ++k)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void Add_Matrices(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2)
{

    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] += first[i][j] + second[i][j];
        }
    }
}

void Subtract_Matrices(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2)
{

    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] += first[i][j] - second[i][j];
        }
    }
}

int main()
{
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2, op_t;
    printf("Enter rows and column for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    while (c1 == r2)
    {

        printf("\nEnter the first Matrix Elements :\n");
        MatrixElements(first, r1, c1);

        printf("\nEnter the second Matrix Elements :\n");
        MatrixElements(second, r2, c2);

        printf("What operation is to perform : \n1.Addtion \n2.Subtraction \n3.Multiplication \n(1,2,3)\n");
        scanf("%d", &op_t);

        if (op_t == 1)
        {
            Add_Matrices(first, second, result, r1, c1, r2, c2);
            printf("\nThe result is :\n");
            display_Matrix(result, r1, c2);
        }

        else if (op_t == 2)
        {
            Subtract_Matrices(first, second, result, r1, c1, r2, c2);
            printf("\nThe result is :\n");
            display_Matrix(result, r1, c2);
        }

        else if (op_t == 3)
        {
            multiply_Matrices(first, second, result, r1, c1, r2, c2);
            printf("\nThe result is :\n");
            display_Matrix(result, r1, c2);
        }

        else
        {
            printf("error : input not found");
        }

        return 0;
    }
}