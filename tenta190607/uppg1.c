#include<stdlib.h>
#include<stdio.h>

int main(void){
    float userinput,sum,max,min;
    printf("offsettid 1:");
    scanf("%f", &userinput);
    sum=max=min=userinput;
    for(int i =1; i<10;i++){
        printf("Offersttid %d: ", i+1);
        scanf("%f",&userinput);
        if(userinput>max)
        {
            max=userinput;            
        }
        else if(userinput<min)
        {
            min=userinput;
        }
        sum += userinput;
    }
    userinput=(sum-max-min)/8;
    
    printf("Offsettiden ar: %f", userinput);
}