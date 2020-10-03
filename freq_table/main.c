#include <stdio.h>
#define j (10)

int main(void){

    char val;
    int freq[j] = {0};
    printf("Number of Frequance Calculator\n");
    printf("Enter a sequence of digits:");
    scanf("%c", &val);
 
    for (int i = 0; i < j; i++)
    {
        freq = val-'0';
        printf("%d", freq[j]);
    }


    return 0;
}