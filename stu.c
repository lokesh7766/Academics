#include <stdio.h>
#include<conio.h>

struct Student{
    char *Name ;
    int age ;

};

int main(){



    struct Student s1;
    struct Student s2 ;
    s1.Name = "lokesh";

    printf("%s", s1.Name);

    return 0;
 
}