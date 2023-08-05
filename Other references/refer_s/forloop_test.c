/*

For loop program 
example sketch
MUL

*/

#include <stdio.h>                                       // including the standard io lib
#include <unistd.h>                                      // including the time lib

int i;
int a;
int k;

/*
int main(){                                              // Main begains (Program will be executed from here)
    char j[] = "Multiplication table of 2\n";            // Variable charactor assn
    printf("%s",j);

    for(i=0;i<10;i++){                                   // for loop
        a=i+1;
        k=a*2;
        printf("%d x 2 = %d\n",a,k);
        sleep(1);                                       // Wait for one second
    }

    return 0;                                           // if error found then the number of errors will be displayed
}
*/

int main(){
    int lst[] = {23,4,65,12,10};

    for ( i = 0; i < 5; i++)
    {
        printf("\n%d",lst[i]);
    }

    return 0;
    
}