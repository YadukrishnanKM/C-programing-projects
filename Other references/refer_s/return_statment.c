/*Thses are ref for return statement in the 
 C-programmming
*/

#include<stdio.h>
#include<stdlib.h>

double cube(double num){
    double result = num*num*num;
    return result;
}

int max_num(int num1,int num2){
    if(num1>num2){
        printf("\n%d > %d",num1,num2);
    }
    else{
        printf("\n%d > %d",num2,num1);
    }
}

int main(){
    double num_1 = cube(12.3);
    printf("\nThe cube is %.2f",num_1);
    max_num(23,45);
    return 0;
}