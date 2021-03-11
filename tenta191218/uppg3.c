#include <stdio.h>
#include <math.h>

typedef struct{
    float c;
    float k;

}expfunktion;

void printExp(expfunktion myExp);
float value(expfunktion myExp, float x);
void multiply(expfunktion *e, float multiplier);
void printExp(expfunktion myExp){
    printf("y(x)= %.2fe^(%.2f)\n", myExp.c, myExp.k);
}
float value(expfunktion myExp, float x){
    return myExp.c*exp(myExp.k *x);

}
void multiply(expfunktion *e, float multiplier)
{
    e->c=e->c*multiplier;
}

int main (void){
    expfunktion myExp={20.f, (float) 0.3};
    printExp(myExp);
    printf("%.2f\n", value(myExp,5.1));
    multiply(&myExp,2.1);
    printExp(myExp);

}