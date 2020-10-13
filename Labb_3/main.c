#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<limits.h>
#include <string.h>
#define ACCOUNTMAX 1000
#define ACCOUNT_NUMBER_MAX 6
#define NAMESIZE 15

// Struct functions
typedef struct 
{
    char account_number[ACCOUNT_NUMBER_MAX+1];
    char owner_name[NAMESIZE+1];
    int balance;
}Account;

// Declaring functions
void startMenu(void); // Done
void register_new_account(Account account_Quantity[], int *numbers_of_accounts);
void print_all_accounts(Account account_number[], int *numbers_of_account);
Account create_account(char account_number[], char owner_name[] ); 
// Sort by Account number(Check asic value of the number)

//Functions
void startMenu(void)
{
    printf("(1) Registrera nya konton");
    printf("(2) Skriv ut alla konton");
    printf("(3) Sortera Konton");
    printf("(4) Sok efter konton");
    printf("(5) Andra saldo pa ett konto");
    printf("(6) Avregistrera ett konto");
    printf("(7) Avsluta\n\n");
    printf("Ange val:");
}
void register_new_account(Account account_Quantity[], int *numbers_of_accounts) // Fix a save to file for the new user
{
    char userinput, account_number[ACCOUNT_NUMBER_MAX+1]={0}, owner_name[NAMESIZE+1]={0} ;
    printf("\n\nRegistera nya konton");
    while(account_number != "q\n")
    {
        if (*numbers_of_accounts<ACCOUNTMAX)
        {
            printf("\nAnge kontonummer (q for att avsluta):  ");
            scanf("\n%[^\n]%*c", account_number);
            for (int i = -1; i < *numbers_of_accounts; i++)
            {
                if (strcmp(account_Quantity[i].account_number, account_number)==0)
                {
                    printf("\nKonto nummert finns redan");
                }
                else
                {
                    printf("%s",account_number);
                    printf("\nAnge agare:");
                    scanf("\n%[^\n]%*c", owner_name);
                }
            } 
            account_Quantity[*numbers_of_accounts] = create_account(account_number,owner_name);
            *numbers_of_accounts++;
        }
    }  
}

void print_all_accounts(Account account_Quantity[],int *numbers_of_accounts)// Check 
{
    printf("Alla Konton\n");
    printf("Konto-nr   Agare           Saldo (kr)");
    printf("_______________________________________________");
    for (int i = 0; i < *numbers_of_accounts; i++)
    {
        
    }
    
}
Account create_account(char account_number[], char owner_name[])
{
    Account user;
    strcpy(user.account_number,account_number);
    strcpy(user.owner_name, owner_name);
    return user;
}

int main(void)
{
    Account account_Quantity[ACCOUNTMAX]; // Numbers of accounts that exist.
    int numbers_of_accounts=0;
    char userinput;
    startMenu();
<<<<<<< HEAD
    while (userinput != '7')
=======
    while (userinput != '9')
>>>>>>> 5347bfb3e01afe506a5b059d7f80d9c88de0174e
    {
        scanf("%c",&userinput);
        switch (userinput)
        {
            case '1': startMenu(); register_new_account(account_Quantity, &numbers_of_accounts); break;
            case '2': print_all_accounts(account_Quantity, &numbers_of_accounts); break;
            case '3': break;
            case '4': break;
            case '5': break;
            case '6': break;
        }
    } 
}