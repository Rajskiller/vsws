#include <stdio.h>
#define freezpoint 32.0f
#define scale_factor (5.0f/9.0f)

int main (void){
float fahrenheit = 100.0f;
float celsius;

printf("Fahreheit to Celsius converter(FCC) \n");

printf("Enter the Fahrenheit to convert: ");

scanf("%f", &fahrenheit);

celsius = (fahrenheit - freezpoint) *scale_factor;

printf ("Celsius conversion: %.1f\n", celsius);

/* skriv ut svaret */

printf("Conversion Done.\n");
return 0;
}