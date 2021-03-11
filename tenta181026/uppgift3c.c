#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TITLE 30
#define TEXTMASS 1000

typedef struct{
    char title[TITLE];
    char string[TEXTMASS];
    int year;


}fingertext;

// Functions declartions
void printText(fingertext first);
int enternewtext(fingertext nbrsoftext[], int pointer);
void printalltexts(fingertext nbrsoftext[], int pointer);
int changeTitle(fingertext first[], int pointer);

// Functions
void printText(fingertext first){
    printf("%s %d\n", first.title, first.year);
    printf("%s\n", first.string);
}
int enternewtext(fingertext nbrsoftext[], int pointer){
    fingertext temptext;
    printf("Enter title: " );
    scanf("%[^\n]%*c", temptext.title);
    printf("\nEnter body: " );
    scanf("%[^\n]%*c", temptext.string );
    printf("\nEnter year: " );
    scanf("%d", &temptext.year);
    strcpy(nbrsoftext[pointer].title,temptext.title);
    strcpy(nbrsoftext[pointer].string, temptext.string);
    nbrsoftext[pointer].year=temptext.year;
    pointer++;
    return pointer;

}
void printalltexts(fingertext nbrsoftext[], int pointer){
    for (int i = 0; i < pointer+1; i++)
    {
        printf("%s %d\n %s\n", nbrsoftext[i].title, nbrsoftext[i].year, nbrsoftext[i].string);
    }
    

}
int changeTitle(fingertext first[], int pointer){
    int position;
    fingertext tempname;
    printf("Give a position (0-%d): ", pointer);
    scanf("%d",&position);
    if (position>pointer)
    {
        printf("Sorry no text exists in that slot");
        return pointer;
    }
    else{
    printf("New Title: ");
    scanf("%*c%[^\n]%*c",tempname.title);
    strcpy(first[position].title,tempname.title);
    return pointer;
    }

}

// Main
int main(void)
{
    fingertext nbrsoftext[TEXTMASS];
    int pointer=0;
    char userin;
    while(userin='q'){

        printf("\nEnter text (e)");
        printf("\nPrint all texts (p)");
        printf("\nChange titel (c)");
        printf("\nQuit (q)\n");
        scanf("%c%*c", &userin);
        switch(userin){
            case 'e': pointer = enternewtext(nbrsoftext,pointer);break;
            case 'p': printalltexts(nbrsoftext,pointer); break;
            case 'c': pointer =changeTitle(nbrsoftext,pointer);break;
        }
    }
    
}