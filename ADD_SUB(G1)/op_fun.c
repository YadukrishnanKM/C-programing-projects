#include <stdio.h>

void add()
{
    int sum = 0;
    int no_ele;
    printf("Enter the range : ");
    scanf("%d", &no_ele);
    int number[no_ele];

    for (int i = 0; i < no_ele; i++)
    {
        printf("Enter the numbers : ");
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < no_ele; i++)
    {
        sum += number[i];
    }

    printf("The sum is : %d", sum);
}

void subtract()
{
    int diff = 0;
    int no_ele;
    printf("Enter the range : ");
    scanf("%d", &no_ele);
    int number[no_ele];

    for (int i = 0; i < no_ele; i++)
    {
        printf("Enter the numbers : ");
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < no_ele; i++)
    {
        diff = number[i] - diff;
    }

    printf("The difference is : %d", diff);
}

void multiply()
{
    int mul = 1;
    int no_ele;
    printf("Enter the range : ");
    scanf("%d", &no_ele);
    int number[no_ele - 1];

    for (int i = 0; i < no_ele; i++)
    {
        printf("Enter the numbers (in descending order) : ");
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < no_ele; i++)
    {
        mul = number[i] * mul;
    }

    printf("The multiple is : %d", mul);
}

void divide()
{
    int div = 1;
    int no_ele;
    printf("Enter the range : ");
    scanf("%d", &no_ele);
    int number[no_ele - 1];

    for (int i = 0; i < no_ele; i++)
    {
        printf("Enter the numbers (non 0 , in descending order) : ");
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < no_ele; i++)
    {
        div = number[i] / div;
    }

    printf("The division is : %d", div);
}

int main()
{
    int k;
    printf("1.Add\n2.Subtract\n3.Multiply\nDivide \n(1,2,3,4)--?");
    scanf("%d", &k);
    switch (k)
    {
    case 1:
        add();
        break;

    case 2:
        subtract();
        break;
    case 3:
        multiply();
        break;
    case 4:
        divide();
        break;
    default:
        break;
    }
    return 0;
}