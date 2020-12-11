#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <math.h>
#include <assert.h>
#include <string.h>

int main(void){
    srand(time(NULL));
    int rng, eneregy = 10, time_=0;
    printf("Sannolikhet att hitta mat 0(0%%)- 100(100%%): ");
    scanf("%d", &rng);

    while (eneregy>0)
    {
        time_++;
        eneregy--;
        if(rng >rand()%100+1)
        {
            eneregy +=5;
            printf("vid tiden %d har varelsen energi %d\n", time_, eneregy);
        }
    }
    printf("Varelsen dog vid tiden %d\n", time_);
}