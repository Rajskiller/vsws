#include <stdio.h>

int main (void){
    int a,b,c,d, max=0, min = 0, tempmax1 = 0, tempmax2=0, tempmin1=0, tempmin2=0;
    printf("Welcome to the max min value calculator");
    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a>=b)
    {
        tempmax1 +=a;
        tempmin1 +=b;
    }
    else
    {
        tempmax1+=b;
        tempmin1+=a;
    }
    
    if (c>=d)
    {
        tempmax2+=c;
        tempmin2+=d;
    }
    else
    {
        tempmax2+=d;
        tempmin2+=c;
    }
    if (tempmax1>tempmax2)
    {
        max=tempmax1;
    }
    else
    {
        max=tempmax2;
    }
    if (tempmin1<tempmin2)
    {
        min=tempmin1;
    }
    else
    {
        min=tempmin2;
    }  
    printf("Your max value is: %d\nYour min value is: %d", max, min);

    return 0;

}