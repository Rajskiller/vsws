#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define AGEMAX 20

void printmenu(void);
int addagetoarray(int array[], int nbrsofage);
int clearage(int array[], int nbrsofage);
void printage(int array[], int nbrsofage);
void medel(int array[], int nbrsofage);
void median(int array[], int nbrsofage);
void printmenu(void)
{
    printf("\n(1) Addera");
    printf("\n(2) Radera");
    printf("\n(3) Skriv ut");
    printf("\n(4) Medel");
    printf("\n(5) Median");
    printf("\n(6) Avsluta\n");
}
int addagetoarray(int array[], int nbrsofage)
{
    int userinp;
    for(int i =nbrsofage; i<AGEMAX;i++)
    {
        if(array[AGEMAX-1]>0)
        {
            printf("Register ar fullt");
            return nbrsofage;
        }
        printf("Ange Alder (0 for att avsluta): ");
        scanf("%d", &userinp);
        if(userinp==0)
        {
            return nbrsofage;
        }
        if(array[i]==0)
        {
            array[i]=userinp;
            nbrsofage++;
        }
        
    }
    return nbrsofage;
}
int clearage(int array[], int nbrsofage){
    for(int i=0; i< AGEMAX;i++)
    {
        array[i]=0;
    }
    return nbrsofage=0;

}
void printage(int array[], int nbrsofage)
{
    if(nbrsofage==0)
    {
        printf("Registret tomt");
        return;
    }
    for (int i = 0;i<nbrsofage;i++)
    {
        printf("%d, ", array[i]);
    }
}
void medel(int array[], int nbrsofage){
    float sum;
    for(int i=0; i<AGEMAX;i++)
    {
        sum+=(float)array[i];
    }
    sum= sum/(float)nbrsofage;
    printf("Medelalder: %.2f", sum);

}
void median(int array[], int nbrsofage){
    int tmparray[nbrsofage], tmp;
    for(int i = 0; i<nbrsofage+1;i++)
    {
        tmparray[i]=array[i];
    }
    // sorting
    for(int i = 0; i< nbrsofage-1;i++){
        for(int j =0;j<nbrsofage-i-1;j++){
            if (tmparray[j]> tmparray[j++])
            {
                tmp=tmparray[j];
                tmparray[j]=tmparray[j++];
                tmparray[j++]=tmp;
            }
        }
    }
    float median=0;
    if(nbrsofage%2==0)
    {
        median = (tmparray[(nbrsofage-1)/2] + tmparray[nbrsofage/2])/2.f;
    }
    else
    {
        median=tmparray[nbrsofage/2];
    }
    printf("Medianalder: %.2f", median);
}

int main(void){
   int choice, array[AGEMAX]={0}, nbrsofage=0;
   while(choice!=6)
   {
       printmenu();
       scanf("%d",&choice);
       switch (choice)
       {
            case 1: nbrsofage = addagetoarray(array, nbrsofage);break;
            case 2: nbrsofage = clearage(array, nbrsofage);
            case 3: printage(array,nbrsofage);
            case 4: medel(array, nbrsofage);
            case 5: median(array, nbrsofage);
            default: break;
        }
   }
}