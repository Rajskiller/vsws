#include <stdio.h>
#include <stdbool.h>
#define G (1.5f)
#define K (0.1f)

int main(void)
{
    int time = 0, throttle = 0;
    float new_height = (float) 0, current_height = (float) 250, current_velocity = (float)-25,new_velocity =(float)0, current_fuel=(float)500, new_fuel=(float)0;
    printf("Lunar decent challenge!\n");
    printf("You will pilot a lunar decent the last 250m.\n");
    printf("Each turn represent 1-second decent time.\n");
    printf("Set the throttle for each turn, 1..100%%\n");
    printf("Time Height Velocity Fuel Throttle?\n"); 
    printf("Time  Height  Velocity   Fuel   Throttle\n");
    do
    {
        printf("%d     %0.1f    %0.1f    %0.1f  ", time, current_height, current_velocity, current_fuel);
        scanf("\n%d",&throttle);
        new_velocity = current_velocity+(throttle*K-G); // formula for velocity
        new_height = current_height+new_velocity+(throttle*K-G)/ (float) 2; // formula for height
        new_fuel = current_fuel - throttle; // formula for fuel consumption
        current_fuel = new_fuel; 
        current_height = new_height;    
        current_velocity = new_velocity;
        time++;
        if (current_fuel < 0)
        {
            current_velocity = (float) -1000;
            current_height = (float)-10;
        }
        if (throttle < 0)
        {
            throttle = 0;
        }
        else if(throttle > 100)
        {
            throttle =100;
        }
    } while (current_height >= (float) 0); 
    if(current_velocity < (float)-2)
    {
        printf("Mission failed we will get them next time");
    }
    else if (current_velocity >= (float)-2)
    {
        printf("You have safely landed at %f m/s", current_velocity);
    }      
}
