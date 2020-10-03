#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#define MAX 10

// Declaring functions
void printList(void); // Done
void printTable(float anarr[], int size); // Done
int resetTable(float anarr[], int size, int index); // Done
int enterArrayValues(float anarr[], int size, int main_ind);//Done
float maxminvalue(float anarr[],int size,int *maxval, int *minval, float avg); //Done
void avrnromvalue(float anarr[], int size, float avg); //Done

//Functions
void printList(void) // Use default case 
{
	printf("\nVECRQ? x\n");
	printf("Please use:\n");
	printf("v to View\n");
	printf("e to Enter\n");
	printf("c to Compute\n");
	printf("r to Reset\n");
	printf("q to Quit\n");
	printf("VECRQ? ");
}
void printTable(float anarr[],int size) // Use "view" to enter this function
{
	printf("[");
	for(int i = 0; i<MAX;i++)
	{
		if (anarr[i]!=0)
		{
				printf("%.1f ", anarr[i]);
		}
	}
	printf("]");
}
int resetTable(float anarr[], int size, int index)// Use "reset" to enter this function
{
	for (int i = 0; i < size; i++)
	{
		anarr[i]=0;
		index=0;
	}
	return index;
}
int enterArrayValues(float anarr[], int size, int main_ind) // feeds the array with data
{
	float userin;
	int temp;
	if(main_ind>=10) main_ind= 0, temp=0;
	temp= main_ind+1;
	for(;main_ind < size; main_ind++)// create a function that will check the index value and continue to write from the last known index
	{
		printf("Enter measurement #%d (or 0) ?", temp++);
		scanf("%f", &userin);
		if (userin == 0) 
		   break;	
		else 
		   anarr[main_ind] = userin;	
	}
	return main_ind;
}
float maxminvalue(float anarr[],int size, int *maxval, int *minval, float avg)// Calculates the max, min and average values
{
	int sum=0,count=0;
	for (int i = 0; i < size; i++) // must ignore the value zero
	{
		if(anarr[i]!=0)
		{
			if(anarr[i]>*maxval)
			{
			*maxval = anarr[i];
			}
			if(anarr[i]<*minval) 
			{
			*minval=anarr[i];
			}
			if (anarr[i]!=0)
			{
				count++;
			}
			sum += anarr[i];
			avg = (float) sum / (float) count;
		}
		else break;
	}
	printf("Max value: %d\n", *maxval);
	printf("Min value: %d\n", *minval);
	printf("Avr value : %.1f\n", avg);
	return avg;
}
void avrnromvalue(float anarr[], int size, float avg)// Calculates the norm value
{
	float temparr[MAX];
	for (int i = 0; i < size; i++)
	{
		temparr[i]=anarr[i];
		if(anarr[i]!=0)
		{
			temparr[i]= temparr[i]-avg;
			temparr[i] = round(temparr[i]);
		}	
	}
	printTable(temparr,MAX);
}
int main(void) {
	printf("Starting Lab #2...\n");
	printf("Mesurment tool 1.1\n");
	printList();
	float anarray[MAX] = {},avg=0;
	int current_index_value = 0,maxval = 1,minval;
	char cmdinpt;
	do
	{
		scanf("\n%c", &cmdinpt);
		if(cmdinpt>= 'a'){
		cmdinpt = cmdinpt - 'a'+'A';
		}
		switch (cmdinpt)
		{
		case 'V':printTable(anarray,MAX);printList(); break;
		case 'E': current_index_value = enterArrayValues(anarray,MAX,current_index_value);printList(); break;
		case 'C' : avg=maxminvalue(anarray, MAX, &maxval,&minval,avg); avrnromvalue(anarray,MAX, avg); printList();break;
		case 'R': current_index_value = resetTable(anarray,MAX,current_index_value); printList();break;
		default:printf("Error: Userinput does not match conditions\n"); printList();break;
		}
	} while (cmdinpt != 'q');

	printf("...Lab #2 done, bye!\n");
	return 0;
}