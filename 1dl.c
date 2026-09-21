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
void  display(struct student* s, int n ){

    for (int i = 0; i < n; i++)
    {
        printf( " %s | %d | %f" ,s[i].name,s[i].rollno,s[i].marks);
    }
    
}

int main()
{
    
    int n;
    printf("enter number of students ");
    scanf("%d" , &n);
     struct student s[n];
     for (int i = 0; i < n ; i++)
     {
        initialize(&s[i]);
        /* code */
     }
     


     display(&s,n);
    
    printf(
        " %s | %d | %f" ,s.name,s.rollno,s.marks
    );
  
    return 0;
}