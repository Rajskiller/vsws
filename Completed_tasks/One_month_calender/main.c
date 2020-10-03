#include<stdbool.h>
#include<stdio.h>

int main(void){
    int i, d, w;
    printf("Enter a weekday (monday = 1, Sunday = 7): ");
    scanf("%d", &w);
    printf ("Enter the numbers of days in the month: ");
    scanf("%d",&d);
     for ( i=0; i < w ;i++ ){
         printf("   ");
     }
     for(i=1; i<=d; i++)
     {
         printf("%2d ", i);
         if((i + w-1)%7 == 0)
         {
             printf("\n");
         }
     }
}