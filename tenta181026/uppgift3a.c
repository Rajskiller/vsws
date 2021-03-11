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

void printText(fingertext first);
void printText(fingertext first){
    printf("%s %d\n", first.title, first.year);
    printf("%s", first.string);
}

int main(void)
{
    fingertext first ={ "Fingerprints", "Fingerprints are unique for an individual.", 2018};
    printText(first);
}