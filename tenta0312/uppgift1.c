#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

float average(float temp);

int main(void)
{
    int amount=1 ,val=0;;
    float tempretur, sum=0;
    while (tempretur !=0)
    {
        printf("\nTemperatur %d: ", amount);
        scanf("%f", &tempretur);
        if(tempretur<45.0f&&tempretur>30.0f)
        {
            sum += tempretur;
            val++;
        }
        amount++;
        printf("%f",sum);
    }
    sum= sum/val;
    printf("Medeltemp är %3.1f", sum);
}