#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <math.h>
#include <assert.h>
#include <string.h>

int initanimal(int animal[], int amount){
    for (int i = 0; i < amount; i++)
    {
        animal[i]=10;
    }
    return amount;
}

int energyconsumtion(int animal[], int amount)
{
    for(int i =0;i<amount;i++)
    {
        animal[i]--;
        if(animal[i]=0){
            for (int j = i; j < amount; j++)
            {
                animal[j]=animal[j+1];
            }
            
        }
    }
    return amount;
}

int foodfound(int animal[],int amount){
    amount = energyconsumtion(animal,amount);
    for (int i = 0; i <amount; i++)
    {
        if (30>(rand()%100+1))
        {
            if(animal[i]>20&& amount<200-1){
                animal[i]=(int) animal[i]/2
                animal[amount]= animal[i];
                animal++;
            }
        }
        
    }
    return amount;
}

int main(void){
    srand(time(NULL));
    int  time_=0, nbrofsmall= 100 ,nbrofbig=10 ,small[200];
    initanimal(small, nbrofsmall);
    while (time_<100)
    {
        time_++;
        nbrofsmall=foodfound(small, nbrofsmall);
        for(int i=0;i<nbrofsmall;i++)
        {
            if( 1000 <=((rand()%1000+1)))
            {
                nbrofsmall--;
            }
        }
    }
    if(time_%10==0)
    printf("Tid: %d  sma: %d \n", time_, nbrofsmall);
}