/*Function examples
  This will demonstrate the different functions in C programing
*/

#include<stdio.h>
#include<stdlib.h>

void say_hello(){
    printf("Hello user\n");
}

void pingpong(){
    printf("Ping pong ping ping pong\n");
}

void info_parameter_eg(char name[]){
    printf("Hello %s\n",name);
}

void self_intro(char name[],int age){
    printf("Hello I'm %s\nAnd I'm %d",name,age);
}

void area_circle(double radius){
    double area;
    double pi = 3.1416;
    int round_off;
    //printf("\nEnter the Radius in cm : ");
    //scanf("%.2lf",radius);
    area = pi*(pow(radius,2));
    round_off = ceil(area);                      //floor or ceil
    printf("\nThe area of the circle with radius %.2f is %.3f \nThe roundoff is %d cm2",radius,area,round_off);
}

//////////////////////////////////////////////////////MAIN_PROGRAM/////////////////////////////////////////////////////////////////////

int main(){
    pingpong();
    say_hello();
    info_parameter_eg("Yadu Krishnan");
    self_intro("YaduKrishnan",19);
    area_circle(14.56);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////