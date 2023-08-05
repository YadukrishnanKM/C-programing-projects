/*
In C programming, a struct (or structure) is a collection of variables 
(can be of different types) under a single name.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
    char name[16];
    char Branch[3];
    int age;
    double gpa;

};

void main(){
    struct Student Student_1;
    Student_1.age = 19;
    Student_1.gpa = 7.2;
    strcpy(Student_1.name,"Yadu Krishnan");
    strcpy(Student_1.Branch,"ECE");
    printf("\nName of the student is %s",Student_1.name);

    struct Student Student_2;
    Student_2.age = 18;
    Student_2.gpa = 7.8;
    strcpy(Student_2.name,"Sabarinath");
    strcpy(Student_2.Branch,"AI");
    printf("\nGPA of the student-2 is %.2f",Student_1.gpa);
}