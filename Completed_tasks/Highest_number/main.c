#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    printf("Welcome to the highest number counter\n");
    
    float val = .0, max = .0;
    bool a=true;
    while(a==true)
    {
        printf("Enter a number: ");
        scanf("%f",&val);
        if (val > max ){
            max = 0.;
            max+=val;
        }
        else if (val <= 0)
        {
            a=false;
        }
    }
    printf("The largets number entered was: %f", max);

}
