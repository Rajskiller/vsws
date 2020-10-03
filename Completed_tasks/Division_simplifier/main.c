#include <stdio.h>



int main(void) {

int numerator1; // Declareing variables
int numerator2;
int denominator1;
int denominator2;

printf("simplyfy 2 fractions, Input your first franction\n"); 

scanf("%d/%d.", &numerator1, &denominator1); // Takes the input of the first fraction

printf("enter your second fraction\n");

scanf("%d/%d.", &numerator2, &denominator2); // Takes the input of the second fraction

int numerator = numerator1 * numerator2; // Multiplying the numerators 
int denominator = denominator1 * denominator2;// Multiplying the denominator

printf("Simplyfied fraction: \n");
printf("%d/%d",numerator,denominator); // writes ut the answer
return 0;

 }
