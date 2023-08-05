/*
When a variable is created in C, a memory address is assigned to the variable.

The memory address is the location of where the variable is stored on the computer.

When we assign a value to the variable, it is stored in this memory address.

To access it, use the reference operator (&)
-----------------------------------------------------------------------------------------------------------------------
-->A pointer is a variable that stores the memory address of another variable as its value.

-->A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

-->The address of the variable you are working with is assigned to the pointer:
*/

#include <stdio.h>                                       // including the standard io lib
#include <stdlib.h>

int age = 10;                                           // pAge is also known as pointer and &age acess memory_adress
int * pAge = &age;
char grade = 'A';

void main(){
    printf("age : %p \nand \ngrade : %p",&age,&grade);
    printf("\npointer variable of pAge is %d",*pAge);
}