#include <stdbool.h>
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<limits.h>
#define TITLESIZE 20
#define AUTHORSIZE 20
#define WHERESIZE 30
#define BOOKSIZE 100

typedef struct{
    char title[TITLESIZE+1];
    char author[AUTHORSIZE+1];
    float price;
    char place[WHERESIZE+1];
}Book;
void printBook(Book *aBook)
{
    printf("%s\n",aBook->title);
    printf("%s\n",aBook->author);
    printf("%.1f\n",aBook->price);
    printf("%s\n",aBook->place);

}
int main(void){
    char
    printf("Enter the Title of the book");
    scanf("%[^'\n']%*c", );
    Book firstbook={"Avatar",
                    "A.A:Miles",
                    0.25f,"Library"};
    printf("Library 0.4\n");
    printBook(&firstbook);
    printf("Exit Library\n");
}
