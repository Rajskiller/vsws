#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CARDMAX 52

typedef struct{
    char suit;
    char value;
} card;

void drawhand(card deck[]);
void filldeck(card deck[], int size);
void printdeck(card deck[]);

void printdeck(card deck[]){
    for(int i =0;i<CARDMAX;i++)
    {
        printf("%d%c, ", deck[i].value, deck[i].suit);
    }
}

void drawhand(card deck[]){
    filldeck(deck,CARDMAX);
    printdeck(deck);

}

void filldeck(card deck[], int size){
    for (int i =0;i < size;i++)
    {
        if(i/13==0){
            deck[i].suit= 'k';
            deck[i].value=i+1;
        }
        if(i/13==1){
            deck[i].suit='s';
            deck[i].value=i+1-13;
        }
        if(i/13==2){
            deck[i].suit='r';
            deck[i].value=i+1-26;
        }
        if(i/13==3){
            deck[i].suit='h';
            deck[i].value=i+1-39;
        }
    }
}


int main (void)
{
    srand(time(NULL));
    card deck[CARDMAX];
    char choice ='j';
    while(choice!='n')
    {
        printf("Vill du ha en korthand (j/n)?");
        scanf("%*c%c",&choice);
        if(choice='j'){
            drawhand(deck);
        }
        else if(choice='n')
        {
            break;
        }
        

    }
    printf("avslutar");
}