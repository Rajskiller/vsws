#include <stdio.h>
int main(void) {
int Year; // Declaring variables
int Month;
int Day;
printf("American to universal calender converter\n"); 
printf("input the date you want to convert (MM/DD/YYYY)?: \n");
scanf("%d/%d/%d",&Month, &Day, &Year); // input the date in the correct format
printf("Conversion: %d/%d/%d\n", Year, Day, Month); // Prints it in the universal calender format
return 0;
}