#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DICE 5

int main(void){
    srand(time(NULL));
    char choice='j';
    while (choice!='n'){
        int nbrofdice, d1=0,d2=0,sum=0;
        float medeldiv=0;
        printf("Hur manga tarningar vill du kasta? (1-2) ");
        scanf("%d", &nbrofdice);
        if (nbrofdice>2&&nbrofdice<1)
        {
            printf("\nFelaktigt val");
        }
        else if (nbrofdice ==1)
        {
            d1= rand()%DICE;
            d1++;
            printf("%d \n", d1);
            medeldiv =1;
        }
        else if(nbrofdice==2)
        {
            d1=rand()%DICE;
            d1++;
            d2=rand()%DICE;
            d2++;
            printf("%d %d \n",d1,d2);
            medeldiv=2;
        }
        medeldiv=((float)d1+(float)d2)/medeldiv;
        sum=d1+d2;
        printf("Summa: %d Medel: %.1f", sum, medeldiv);
        printf("Vill du kasta igen?(j/n) ");
        scanf("%*c%c",&choice);
        
    }
    printf("Avslutar");
}