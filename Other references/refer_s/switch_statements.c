/*
 A switch statement allows a variable to be tested 
 for equality against a list of values. Each value is called a case, 
 and the variable being switched on is checked for each switch case
*/

#include<stdio.h>
#include<stdlib.h>

char Grade = 'V';

int main(){
    switch (Grade)                               // switch wrt to the charactor Grade
    {
    case 'A':
        printf("You have done great work.");
        break;

    case 'B':
        printf("You have done alright.");
        break;
    
    default:                               // default will put out a default out put id the charactor endered does't match each case
        printf("Charactor-->invalied");
        break;
    }

    return 0;
}

//End