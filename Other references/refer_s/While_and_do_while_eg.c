/*
The while loop evaluates the testExpression inside the parentheses ().
If testExpression is true, statements inside the body of while loop are executed. Then, testExpression is evaluated again.
The process goes on until testExpression is evaluated to false.
If testExpression is false, the loop terminates (ends).
*/

#include<stdio.h>
#include<stdlib.h>
/*
int indedx_1 = 0;

void main(){
    while (indedx_1 <5)
    {
        indedx_1++;
        printf("\n%d",indedx_1);
        
    }
    
}

*/

/*
//Infinate loop

void main(){
    while (true)
    {
        printf("\n%d",indedx_1);
    }
    
}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
The do..while loop is similar to the while loop with one important difference. 
The body of do...while loop is executed at least once. Only then, the test expression is evaluated.
*/


int indedx_1 = 0;

void main(){
    do
    {
        indedx_1++;
        printf("\n%d",indedx_1);  
    } while (indedx_1 <5);
}

