#include <stdio.h>
#include <stdlib.h>

int main (void){
    char code;
    int userin, affrim=2;
    do
    {
        printf("Vill du ange tecken(1) eller kod (2): ");

    scanf("%d",&userin);
    if (userin==1)
    {
        printf("Ange tecken: ");
        scanf("%*c%c", &code);
        printf("Kod: %d", code);
    }
    else if (userin == 2)
    {
        printf("Ange kod: ");
        scanf("%d",&code);
        printf("Tecken: %c", code);
    }
    printf("\nVill du avsluta (1) eller fortsatta (2)");
    scanf("%d",&affrim);
    
    } while (affrim!=1);
    
    
    
}