/*
-->This program demonstrate the use of fgets function
   in c programming.

-->It can be used insted of scanf for a variable contain spaces between the charactors
*/

#include <stdio.h>
#include <stdlib.h>

char name_1[16]; // This wil create a variable charactor callled as name

void main()
{
    printf("Enter the Example var charactor with space : ");
    fgets(name_1, 16, stdin); // in this 16 is number of charactors and stdin is standerd input
    printf("The Entered var char is : %s ", name_1);
}

/*
// For ref with scanf

#include<stdio.h>
#include<stdlib.h>

char name_1[16];             // This wil create a variable charactor callled as name

void main(){
    printf("Enter the Example var charactor with space : ");
    scanf("%s",name_1);
    printf("The Entered var char is : %s ",name_1);
*/