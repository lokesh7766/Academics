#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
{
   int id;
   char title[20];
char author[50];

float price;
int available ;

};
void displaybook(struct book  *books,int n ){
printf("\n ================ book details=======================+");

int i ;
for ( i = 0; i < n; i++)
{
    printf("book : id  %d \n" , books[i].id);

    printf("book : author  %s \n" , books[i].author);
    printf("book : price  %.2f \n" , books[i].price);

    /* code */
}



}


void searchbook(){
    printf("laskdalddj");
}

void issuebook(){
    printf("laskdalddj");
}

void returnbook(){
    printf("laskdalddj");
}
int main(){
struct book *books;
int n ;
int i ;
 int choice;
 printf("enter the number of books ");
 scanf("%d", &n);

 //dynamic memory allocation 

 books = (struct book *)malloc(sizeof(struct book));
 if (books == NULL)
 {
    printf("malloc faile");
    return 1 ; 
 }
 printf("enter the details of the books \n ");
for ( i = 0; i < n; i++)
{printf("books %d \n", i + 1);
    printf("Enter book  id  \n ");
    scanf(" %d" , &books[i].id);
printf("enter the book title \n ");
scanf(" %[^\n]",books[i].title);
printf("enter authors name \n ");
scanf( " %[^\n]" ,books[i].author);
printf("enter price\n ");
scanf("%f", &books[i].price);
books[i].available = 1; 

    /* code */
}


do
{

    printf("-----------------BMS-----------------");
    printf("1.display books\n ");
    printf("2.seacrh a  book \n ");
    printf("2.issue a bok \n");
    printf("4.return a book ");
    printf("5 .Exit");


    printf("enter ur choice \n ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: displaybook(books,n);
        /* code */
        break;
    case 2 : searchbook(books,n);
    break;
    case  3 : issuebook(books,n);
    break;
    case 4 : returnbook();
    break;
    case 5 : 
    printf("THANKING YOU ");

    default:
    printf("invalid choide");

        break;
    }

    /* code */
} while (choice!=5);



    
}
