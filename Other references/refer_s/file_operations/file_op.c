

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// w = Write, a = append, r = read
char line_1[255];
//char choice[];

void main(){
    //FILE * fpointer = fopen("employee.txt","w"); // to store in other directory provide specifc adress.
    //fprintf(fpointer,"Rakesh salesman 265723\nAnil manager 189674\nLakshmi CA 243958");

    FILE * fpointer = fopen("employee.txt","r");
    fgets(line_1,255,fpointer);
    fgets(line_1,255,fpointer);
    //fgets(line_1,255,fpointer);
    puts(line_1);                              // similar as printf
    /*switch (choice){
        case 1{
            puts()
        }
    }*/
    fclose(fpointer);
}