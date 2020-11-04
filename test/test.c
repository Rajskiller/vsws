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
int dubbla(int *p){

  (&p)=(&p)*2;

}

int main() {

  int *a;

  &a=3;

  printf("%d",dubbla(a));

  return 0;

}
int main(void){

int a = 3;

int *c;

*c = a;

printf("%d",*c);
   /* int kontrolval= char värde för 9;
 for (int i = 0; i < antal_k; i++)
 {
     for (int i = 6; i < kontonummer; i--)
     {
         000001 
         123456
         123466
         300411
     } 
     
 }
 */
 
}
int doReg(Bank konto[],int pCount){
    Bank temp;
        printf("Register new account.\n");
        int atKonto=0;
        while(pCount<MAX)
        {
            do{
                printf("Enter account-number (q to quit): ");
                scanf("%s%c", temp.kontonmr);
                if(!(strcmp(temp.kontonmr, "q")))
                    return 0;
                for(int i =0;i<pCount;i++){
                    if(!(strcmp(temp.kontonmr, konto[i].kontonmr))){
                        printf("Account-number already exists.\n");
                        atKonto=i;
                    }

                }

            }while(!(strcmp(temp.kontonmr, konto[atKonto].kontonmr)));
            printf("Enter first name: ");
            scanf("%[^\n]%c",temp.fName);
            printf("Enter surname: ");
            scanf("%[^\n]%c",temp.sName);
            return 0;
            temp.balance=0;
            konto[pCount]=temp;
            (pCount)++;
        }
        printf("Max amount of accounts reached.\n");
int doReg(Bank konto[],int *pCount){
    Bank temp;
        printf("Register new account.\n");
        int atKonto=0;
        while(*pCount<MAX){
            do{
                printf("Enter account-number (q to quit): ");
                scanf("%s%*c", temp.kontonmr);
                if(!(strcmp(temp.kontonmr, "q")))
                    return 0;
                for(int i =0;i<*pCount;i++){
                    if(!(strcmp(temp.kontonmr, konto[i].kontonmr))){
                        printf("Account-number already exists.\n");
                        atKonto=i;
                    }

                }

            }while(!(strcmp(temp.kontonmr, konto[atKonto].kontonmr)));
            printf("Enter first name: ");
            scanf("%[^\n]%*c",temp.fName);
            printf("Enter surname: ");
            scanf("%[^\n]%*c",temp.sName);
            return 0;
            temp.balance=0;
            konto[*pCount]=temp;
            (*pCount)++;
        }
        printf("Max amount of accounts reached.\n");
