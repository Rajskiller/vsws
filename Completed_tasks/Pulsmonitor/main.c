#include <stdio.h>
int main(void)
{
    int beat, alarm;
    printf("Welcome to the beat moniter \n");
    printf("What is the current beat\n");
    scanf("%d", &beat);
    if (beat > 40 && beat < 80)
    {
        printf("The pulse is within the range of");
    }else{
        alarm =1;
        printf("The alarm has been activated");
        if (beat < 40)
        {
            printf("It is under 40 bpm");
        }
        if (beat > 80)
        {
            alarm =0;
            printf("It is over 80bpm");
        }
    }
}
