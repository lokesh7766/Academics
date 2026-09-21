#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[50];
    int rollno;
    float marks; /* data */
};

int main()
{
    struct student s1;
    printf("enter ur  name marks roll no ");

    scanf("%s", s1.name);
    scanf("%d", &s1.rollno);
    scanf("%f", &s1.marks);
    printf("%s %d %f", s1.name, &s1.rollno, &s1.marks);

    return 0;
}