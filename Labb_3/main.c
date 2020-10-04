#include <stdbool.h>
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<limits.h>
#include <string.h>
#define ACCOUNTMAX 1000
#define ACCOUNT_NUMBER_MAX 6
#define NAMESIZE 15

// Declaring functions
void startMenu(void);
void register_new_account();
void print_all_accounts();
// Medain function of all accounts
// Average value of all accounts

//Functions
void startMenu(void)
{
    printf("(1) Registrera nya konton");
    printf("(2) Skriv ut alla konton");
    printf("(3) Sortera Konton");
    printf("(4) Sok efter konton");
    printf("(5) Andra saldor pa ett konto");
    printf("(6) Avregistrera ett konto");
    printf("(7) Statistik");
    printf("(8) Overforing");
    printf("(9) Avsluta\n\n");
    printf("Ange val:");
}
void register_new_account()
{
    for(int i =0; i<ACCOUNTMAX;i++){
       // if(strcmp())
    }

}
void print_all_accounts()// Check 
{
    for (int i = 0; i < ACCOUNTMAX; i++)
    {
        
    }
    
}
//print number of acc

// Struct functions
typedef struct 
{
    char account_number[ACCOUNT_NUMBER_MAX+1];
    char owner_name[NAMESIZE+1];
    float balance;
}Account;


int main(void)
{
    Account account_Quantity[ACCOUNTMAX]; // Numbers of accounts that exist.
    char userinput;
    startMenu();
    do
    {
        scanf("%c",&userinput);
        switch (userinput)
        {
        case '1': break;
        case '2': break;
        case '3': break;
        case '4': break;
        case '5': break;
        case '6': break;
        case '7': break;
        case '8': break;
        }
    } while (userinput != '9');
}