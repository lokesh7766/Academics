#include <stdio.h>
#include<conio.h>

struct Student{
    char Name[20] ;
    int age ;

};
void Blr(struct  Student s1){

    printf("%s",s1.Name);
}

int main(){



   struct  Student s1= 
   {
    /* data */" lokesh g", 34
   };
   
Blr(s1);
}