#include <stdio.h>
#define PI (3.14f)

int main (void){

// Create a variable that will contain the radius
float radius;
float volume;
// Function that will declare the value of "Radius" through the users input 
printf("select your radius:\n");
scanf("%f",&radius);
volume = (4.0/3.0 * PI * radius * radius * radius);

printf("The volume is %.1f :\n", volume);
return 0;
}
