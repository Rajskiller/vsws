#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define CARDMAX 52
#define DRAWN 5

typedef struct
{
    char suit;
    int value;
}deck;
void drawhand(deck nbrsofcards[], int hands);
void filldeck(deck nbrsofcards[]);
void shuffle(deck nbrsofcards[]);
void randfunc(deck nbrsofcards[], int tempval1, int tempval2);
int checkthrees(deck nbrsofcards[], int draws);
void printcard(deck nbrsofcards[], int draws);
void bubblesort(deck nbrsofcards[], int draws);

void drawhand(deck nbrsofcards[], int hands)
{
    int count=0;
    filldeck(nbrsofcards);
    shuffle(nbrsofcards);
    while(hands!=count){
        printcard(nbrsofcards,DRAWN);
        if(checkthrees(nbrsofcards, DRAWN)==1){
            printf("triss\n");
        }
        else
        {
            printf("ingen triss\n");
        }
        count++;
    }
    


}
void filldeck(deck nbrsofcards[])
{
    for(int i= 0; i<CARDMAX;i++)
    {
        if(i/13==0){
            nbrsofcards[i].suit='H';
            nbrsofcards[i].value=i+1;
        }
        if (i/13==1)
        {
            nbrsofcards[i].suit='S';
            nbrsofcards[i].value=i+1-13;
        }
        if (i/13==2)
        {
            nbrsofcards[i].suit='K';
            nbrsofcards[i].value=i+1-26;
        }
        if (i/13==3)
        {
            nbrsofcards[i].suit='R';
            nbrsofcards[i].value=i+1-39;
        }
    }
}
void shuffle(deck nbrsofcards[])
{
    for (int i = 0; i < CARDMAX; i++)
    {
        randfunc(nbrsofcards, i, rand()%CARDMAX);
    }
    
}
void randfunc(deck nbrsofcards[], int tempval1, int tempval2)
{
    deck tep = nbrsofcards[tempval1];
    nbrsofcards[tempval1]=nbrsofcards[tempval2];
    nbrsofcards[tempval2]=tep;
}
int checkthrees(deck nbrsofcards[], int draws){
    bubblesort(nbrsofcards,draws);
    int index=0,tripss=0;
    for (int i = 0; i <=13; i++)
    {
        for(int j= 0; j<CARDMAX;j++){
            if (nbrsofcards[j].value==i)
            {
                index++;
            }
            if(index>=3) tripss=1;
        }
    } 
    return tripss;
}
void printcard(deck nbrsofcards[], int draws){
    for (int i = 0; i < draws; i++)
    {
        printf("%d%c, ",nbrsofcards[i].value, nbrsofcards[i].suit);
    }
}
void bubblesort(deck nbrsofcards[], int draws){
    for (int i = 0; i < draws; i++)
    {
        for (int j =0; j<draws-1-i;j++)
        {
            if(nbrsofcards[j].value>nbrsofcards[j+1].value){
                randfunc(nbrsofcards,j,j+1);
            }
            
        }
    }
    
}
int main(void)
{
    srand(time(NULL));
    deck nbrsofcards[CARDMAX];
    int hands;
    printf("Hur manga hander (max 10): ");
    scanf("%d",&hands);
    if (hands<11)
    {
        drawhand(nbrsofcards, hands);
    }
    
   

}