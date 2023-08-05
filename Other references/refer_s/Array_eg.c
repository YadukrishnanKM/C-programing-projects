// This is ann demo of simple array 

#include<stdio.h>
#include<stdlib.h>


int numbers_1[] = {1,5,2,7,50,43,26};             // This is an array

int main(){
    printf("%d",numbers_1[5]);                    // This tells us to print element 5 of the given array
    return 0;
}


// This modify the array

/*
int numbers_1[] = {1,5,2,7,50,43,26};

int main(){
    numbers_1[5]=300;
    printf("%d",numbers_1[5]);
    return 0;
}
*/

//To append to an array
/*
int numbers_1[5];

int main(){
    numbers_1[5]=300;
    numbers_1[1] = 4;
    numbers_1[0] = 36;
    numbers_1[3] = 78;
    printf("%d",numbers_1[5]);
    return 0;
}

*/