/*
The two-dimensional array can be defined as an array of arrays. The 2D array is organized as matrices which can be represented 
as the collection of rows and columns. However, 2D arrays are created to implement a relational database lookalike data structure. 
It provides ease of holding the bulk of data at once which can be passed to any number of functions wherever required.

Declaration of two dimensional Array in C:
+-------------------------------------+
| data_type array_name[rows][columns];|
+-------------------------------------+  

-->Nesting of loops is the feature in C that allows the looping of statements inside another loop.
-->Outer_loop and Inner_loop are the valid loops that can be a 'for' loop, 'while' loop or 'do-while' loop.

*/

#include <stdio.h>                                       // including the standard io lib
#include<stdlib.h>

int nums[3][2] = {{1,2},{3,4},{5,6}};                   //initiating array operation variable
/*
int main(){
    printf("%d",nums[0][1]);                            // print out element_1 of 0th Array
}

*/

//Nested for_loop:

int main(){
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d  ",nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}

