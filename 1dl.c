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
void initialize(struct  student* s){
    printf("enter name");
    scanf("%s",(*s).name);
    printf("enter roll");
    scanf("%d" ,&s ->rollno);
    printf("enter marks");
    scanf("%f",&s->marks);
}

int main()
{
    struct student s;
    initialize(&s);
    printf(
        " %s | %d | %f" ,s.name,s.rollno,s.marks
    );
  
    return 0;
}