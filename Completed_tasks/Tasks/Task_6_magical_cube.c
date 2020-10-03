#include <stdio.h>
int main (void){
 int a1 ,a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4; // Declaring variables 
 printf("Write a numbers from 1 to 16\n");
 scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a1 ,&a2, &a3, &a4, &b1, &b2, &b3, &b4, &c1, &c2, &c3, &c4, &d1, &d2, &d3, &d4 ); // input from the user for numbers between 1 - 16
 printf("%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d\n" ,a1 ,a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4); // prints out the variables in a 4 * 4 format
 int row1 = a1 + a2 + a3 + a4; // addtions of the rows
 int row2 = b1 + b2 + b3 + b4;
 int row3 = c1 + c2 + c3 + c4;
 int row4 = d1 + d2 + d3 + d4;
 int colum1 = a1 + b1 + c1 + d1; // addition of the colums
 int colum2 = a2 + b2 + c2 + d2;
 int colum3 = a3 + b3 + c3 + d3;
 int colum4 = a4 + b4 + c4 + d4;
 int diagonal1 = a1 +b2 + c3 + d4; // addition of the diagonals
 int diagonal2 = a4 + b3 + c2 + d1;
 printf("The sum of all the rows   %d %d %d %d \n",row1,row2,row3,row4 ); // Prints out the sum
 printf("The sum of all the colums %d %d %d %d\n",colum1, colum2,colum3,colum4);
 printf("The sum of the diagonals  %d %d\n", diagonal1, diagonal2);
 return 0;
}
 