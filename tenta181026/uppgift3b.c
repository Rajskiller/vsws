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
fingertext changeTitle(fingertext first, char title[]);

void printText(fingertext first){
    printf("%s %d\n", first.title, first.year);
    printf("%s\n", first.string);
}

fingertext changeTitle(fingertext first, char title[]){
    strcpy(first.title, title);
    return first;

}

int main(void)
{
    char newtitle[TITLE]={"Individual"};
    fingertext first ={ "Fingerprints", "Fingerprints are unique for an individual.", 2018};
    printText(first);
    first=changeTitle(first,newtitle);
    printText(first);
}