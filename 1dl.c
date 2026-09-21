#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct  student
{
char name[50];
 int rollno ; 
 float marks  ;   /* data */
};

int main() {
struct student s1;
strcpy(s1.name , " lokesh");

s1.rollno = 106;
s1.marks = 7.8;







    return 0;
}