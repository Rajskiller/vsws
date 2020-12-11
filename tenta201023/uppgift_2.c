#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<time.h>
#define DECKSIZE 52

//structs
typedef struct{
    int value;
    char color;
}card;

//declaring functions
void drawhand(int *nbrofcards);
void fill_deck(card deck[]);
void print_card(card deck[], int *nbrofcards);
void shuffle(card deck[]);
void mixswap(card deck[], int tempplace1, int tempplace2);

//functions
void drawhand(int *nbrofcards)
{
    card deck[DECKSIZE];
    fill_deck(deck);
    shuffle(deck);
    print_card(deck,nbrofcards);
}
void fill_deck(card deck[]){
    for (int i = 0; i < DECKSIZE; i++)
    {
        if(i/13==0){
            deck[i].value=i+1;
            deck[i].color='R';
        }
        if(i/13==1)
        {
            deck[i].value=i-13+1;
            deck[i].color='K';
        }
        if(i/13==2)
         {
            deck[i].value=i-26+1;
            deck[i].color='H';
        }
        if(i/13==3)
         {
            deck[i].value=i-39+1;
            deck[i].color='S';
        }
    }
}
void print_card(card deck[], int *nbrofcards){
    for (int i = 0; i < *nbrofcards; i++)
    {
        printf("%d%c, " , deck[i].value, deck[i].color);
    }
    printf("\n");
}

void shuffle(card deck[]){
    for (int i = 0; i < DECKSIZE; i++)
    {
        mixswap(deck, i,rand()%DECKSIZE);
    }
}

void mixswap(card deck[], int tempplace1, int tempplace2)
{
    card tempcard= deck[tempplace1];
    deck[tempplace1]=deck[tempplace2];
    deck[tempplace2]=tempcard;
}

int main(void){
    int nbrofcards;
    srand(time(NULL));
    while(nbrofcards!=0)
    {
        printf("Hur manga kort vill du dra (0-10): ");
        scanf("%d", &nbrofcards);
        if (nbrofcards>0&&nbrofcards<11)
        {
            drawhand(&nbrofcards);
        }
        
    }
    printf("Avslutar");
}