#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void inrandnum(void)
{
    
}

int getcard(int aCard)
{
     switch (rank)
        {
            case 0: printf("a\n");break;
            case 1: printf("2\n");break;
            case 2: printf("3\n");break;
            case 3: printf("4\n");break;
            case 4: printf("5\n");break;
            case 5: printf("6\n");break;
            case 6: printf("7\n");break;
            case 7: printf("8\n");break;
            case 8: printf("9\n");break;
            case 9: printf("t\n");break;
            case 10: printf("j\n");break;
            case 11: printf("q\n");break;
            case 12: printf("k\n");break;
            default printf("%2d]", aCard%rank)

}
int suit(int aSuit)
{
     switch (suit)
        {
            case 0 :prinft("Club ");break;
            case 0 :prinft("Diamond ");break;
            case 0 :prinft("Heart ");break;
            case 0 :prinft("Spade ");break;
            
        }
       
}
int getRank(int aCard)
{

}
int main (void)
{

        
    
    return 0;
}