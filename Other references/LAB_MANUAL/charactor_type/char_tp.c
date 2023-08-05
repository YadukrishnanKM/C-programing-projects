// Program to find Character type

#include <stdio.h> //Header File

void main()
{
    char ch; // Initiate character ch variable

    printf("Enter the character : ");
    scanf("%c", &ch); // scan for character and store in char ch

    if (ch >= 'a' && ch <= 'z') // If character is between a and z
    {
        printf("THe char %c small and ASCII is %d", ch, ch);
    }
    else if (ch >= 'A' && ch <= 'Z') // If character is between A and Z
    {
        printf("The character is %c is capital and ASCII is %d", ch, ch);
    }
    else
    {
        printf("THe character is %c is a special character and the ASCII is %d", ch, ch);
    }
}