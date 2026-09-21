#include <stdio.h>
#include<conio.h>

struct Student{
    char Name[20] ;
    int age ;

};
int main(){

    struct  Student s1 = { "loki", 22};

  struct Student *ptr = &s1;
    
}