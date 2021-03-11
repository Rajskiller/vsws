#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 50
#define DICEMAX 5

//int addinarray(int taken[], int pointer, int sum);
void printarray(int taken[], int size);
int throwdice(int taken[], int d1,int d2,int d3, int pointer);
int operations(int v1, int v2, char c1);
int comparearray(int taken[], int size, int sumvalue, int pointer);
int sumofarray(int taken[],int size);

void printarray(int taken[], int size){
    for (int i = 0; i < size; i++)
    {
        if(taken[i]>0 && taken[i]<MAX)
        {
            printf("%d, ", taken[i]);
        }
    }
    
}
int throwdice(int taken[],int d1,int d2,int d3, int pointer){
    
    char op1,op2;
    int sum;
    d1=(rand()&DICEMAX)+1;
    d2=(rand()&DICEMAX)+1;
    d3=(rand()&DICEMAX)+1;
    printf("Du fick %d, %d, %d,\n", d1,d2,d3);
    printf("Vilka tva raknesatt vill du anvanda(+, -, *, /): ");
    scanf("%c%c%*c", &op1, &op2);
    sum = operations(d1,d2,op1);
    sum = operations(sum,d3,op2);
    printf("Resultat: %d", sum);
    if(sum<=0||sum>49)
        return pointer=0;
    else {
        taken[pointer]+=sum;
        pointer++;
        pointer = comparearray(taken,MAX,sum, pointer);
    }
    return pointer;
    
}

int comparearray(int taken[], int size, int sumvalue, int pointer){
    
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if (taken[i]==taken[j]&&!(taken[i]==0 || taken[i]>50))
            {
                pointer=0;
            }
        }
    }
    return pointer;
}

int operations(int v1, int v2, char c1){
    switch (c1)
    {
    case '+':return v1+v2;
    case '-':return v1-v2;
    case '*':return v1*v2;
    case '/':return v1/v2;
    }
}

int sumofarray(int taken[],int size)
{
    int sum=0;
    {
        for (int i = 0; i < size; i++)
        {
            sum+=taken[i];
        }
        
    }
    return sum;
}

int main(void)
{
    int taken[MAX]={0}, pointer = 0,d1,d2,d3, sum;
    char userinput='k';
    srand(time(NULL));
    while(userinput!='a')
    {
        printf("\nFoljande tal ar 1-49 upptagna: ");
        printarray(taken,MAX);
        printf("\nVill du kasta tarningar (k) eller avsluta (a): ");
        scanf("%c%*c", &userinput);
        if(userinput='k'){
           pointer = throwdice(taken,d1,d2,d3,pointer);
           if (pointer==0){
               printf("\nDu forlorade och far 0p");
               break;
           }
           
        }
           
    }
    if(userinput='a'){
        sum=sumofarray(taken,MAX);
        printf("\nDu fick %dp",sum);

    }
  
}