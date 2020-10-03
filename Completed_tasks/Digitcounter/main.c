#include <stdio.h>
#include<stdbool.h>

int main (void)
{ 
    int val;
    printf("Welcome to the digit counter\n");
    printf("Insert a number: ");
    scanf("%d",&val); 
   if (val<10)
   {
       printf("This is a singal digit");
   }
   else if (val < 100)
   {
       printf("There are 2 digits");
   }
   else if (val < 1000)
   {
       printf("There are 3 digits");
   }
   else 
   {
       printf("Error: Userinput does not meet condtions");
   }
   
   
    return 0;
    
}