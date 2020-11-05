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

//Menu functions
void startMenu(void); // Done
void print_sort_menu(void);//Done
void print_search_menu(void);//Done
void print_change_balance_menu(void);


int register_new_account(Account account_Quantity[], int *numbers_of_accounts); 
void print_all_accounts(Account account_Quantity[], int *numbers_of_account);//Done

void sort_accounts_menu(Account account_Quantity[], int*numbers_of_accounts);
void sort_by_account_number(Account account_Quantity[], int*numbers_of_accounts); //Done
void sort_by_name(Account account_Quantity[], int*numbers_of_accounts);//Done
void sort_by_balance(Account account_Quantity[], int*numbers_of_accounts);// Done

void search_accounts_menu(Account account_Quantity[], int*numbers_of_accounts);//Done
void search_by_number(Account account_Quantity[], int *numbers_of_accounts);//Done
void search_by_name(Account account_Quantity[], int *numbers_of_accounts);//Done
void search_by_balance(Account account_Quantity[], int *numbers_of_accounts);//Done

void change_account_balance_menu(Account account_Quantity[], int *numbers_of_accounts);//Done
void deposit_withdraw_menu(Account account_Quantity[], int *numbers_of_accounts); //Done
void deposit(Account account_Quantity[], int *numbers_of_accounts,char tempnumber[]);//Done
void withdraw(Account account_Quantity[], int *numbers_of_accounts, char tempnumber[]);//Done

void delete_account_menu(Account account_Quantity[], int *numbers_of_accounts);
void save_bank(Account account_Quantity[], int *numbers_of_accounts);
void load_bank(Account account_Quantity[], int *numbers_of_accounts);

Account intitaccount(char account_number[],char ownername[], int balance);
int main(void);
// Sort by Account number(Check asic value of the number)

//Functions
void startMenu(void)
{
    printf("\n(1) Registrera nya konton\n");
    printf("(2) Skriv ut alla konton\n");
    printf("(3) Sortera Konton\n");
    printf("(4) Sok efter konton\n");
    printf("(5) Andra saldo pa ett konto\n");
    printf("(6) Avregistrera ett konto\n");
    printf("(7) Avsluta\n\n");
    printf("Ange val:");
}
void print_sort_menu(void)
{
    printf("\nVälj ett satt att soka efter konto:\n");
    printf("Konto nummer (1)\n");
    printf("Agare (2)\n");
    printf("Saldo (3)\n");
    printf("Huvudmeny (4)\n");
    printf("Ange val: ");

}
void print_search_menu(void)
{
    printf("\nSokning\n\n");
    printf("(1) Kontonummer\n");
    printf("(2) Agare\n");
    printf("(3) Saldo\n");
    printf("(4) Huvudmeny\n");
    printf("Ange val:");

}
void print_change_balance_menu(void)
{
    printf("\n(1) Kontonummer\n");
    printf("(2) Agare\n");
    printf("(3) Huvudmeny\n");
}
int register_new_account(Account account_Quantity[], int *numbers_of_accounts) // Fix a save to file for the new user
{
    Account temp_acc;
    int tempaccindex=0;
    printf("\n\nRegistera nya konton");
    while(*numbers_of_accounts<ACCOUNTMAX)
    {
        printf("\nAnge kontonummer (q for att avsluta):  ");
        scanf("\n%[^\n]%*c", temp_acc.account_number);
        printf("%s", temp_acc.account_number);
        while(strcmp(temp_acc.account_number, account_Quantity[tempaccindex].account_number)!=0){
            if (strcmp(temp_acc.account_number,"q")==0) return 0;
            for (int i = 0; i < *numbers_of_accounts+1; i++)
            {
                if (strcmp(account_Quantity[i].account_number, temp_acc.account_number)==0)
                {
                    printf("\nKonto nummert finns redan");
                    tempaccindex=i;
                }
            } 
            printf("\nAnge agare:");
            scanf("%[^\n]%*c", temp_acc.owner_name);
            strupr(temp_acc.owner_name);
            temp_acc.balance=0;
            account_Quantity[*numbers_of_accounts]=temp_acc;
            (*numbers_of_accounts)++;
            printf("%s", account_Quantity[*(numbers_of_accounts)].account_number);
            return 0;
        }           
    }     
}  
void print_all_accounts(Account account_Quantity[],int *numbers_of_accounts)// Check 
{
    printf("Alla Konton\n");
    printf("Konto-nr\tAgare\tSaldo (kr)");
    printf("_______________________________________________");
    for (int i = 0; i < *numbers_of_accounts+1; i++)
    {
        printf("\n%s\t", account_Quantity[i].account_number);
        printf("%s\t", account_Quantity[i].owner_name);
        printf("%d\t", account_Quantity[i].balance);
    }
}
void sort_account_menu(Account account_Quantity[], int *numbers_of_accounts)
{
    print_sort_menu();
    char userinput;
    while(userinput != '4')
    {
        scanf("%c",&userinput);
        switch (userinput)
        {
        case '1': sort_by_account_number(account_Quantity,numbers_of_accounts); break;
        case '2': sort_by_name(account_Quantity,numbers_of_accounts); break;
        case '3': sort_by_balance(account_Quantity,numbers_of_accounts); break;
        }
    }
}
void sort_by_account_number(Account account_Quantity[], int *numbers_of_accounts)
{
    Account temp;
    for(int i=0; i<*numbers_of_accounts;i++)
    {
        for (int j = 0; j < *numbers_of_accounts-i-1; j++)
        {
            if(strcmp(account_Quantity[j].account_number,account_Quantity[j+1].account_number)>0){
                temp=account_Quantity[j];
                account_Quantity[j]=account_Quantity[j+1];
                account_Quantity[j+1]=temp;
            }
        }
    }
}
void sort_by_name(Account account_Quantity[], int *numbers_of_accounts)
{
    Account temp;
    for(int i=0; i<*numbers_of_accounts;i++)
    {
        for (int j = 0; j < *numbers_of_accounts-i-1; j++)
        {
            if(strcmp(account_Quantity[j].owner_name,account_Quantity[j+1].owner_name)>0){
                temp=account_Quantity[j];
                account_Quantity[j]=account_Quantity[j+1];
                account_Quantity[j+1]=temp;
            }
        }
    }
}
void sort_by_balance(Account account_Quantity[], int*numbers_of_accounts)
{
    Account temp;
    for(int i=0; i<*numbers_of_accounts;i++)
    {
        for (int j = 0; j < *numbers_of_accounts-i-1; j++)
        {
            if(account_Quantity[j].balance >=account_Quantity[j+1].balance){
                temp=account_Quantity[j];
                account_Quantity[j]=account_Quantity[j+1];
                account_Quantity[j+1]=temp;
            }
        }   
    }
}
void search_account_menu(Account account_Quantity[], int *numbers_of_accounts)
{
    print_search_menu();
    int userinput;
    while(userinput!=4)
    {
        print_search_menu();
        scanf("%d",&userinput);
        switch (userinput)
        {
        case 1: search_by_number(account_Quantity,numbers_of_accounts); break;
        case 2: search_by_name(account_Quantity,numbers_of_accounts); break;
        case 3: search_by_balance(account_Quantity,numbers_of_accounts); break;
        }
    }
}
void search_by_number(Account account_Quantity[], int *numbers_of_accounts)
{
    char tempnumber[ACCOUNT_NUMBER_MAX];
    printf("Ange kontonummer: ");
    scanf("\n%[^\n]%*c", tempnumber);
    for (int i = 0; i < *numbers_of_accounts; i++)
    {
        if(strstr(account_Quantity[i].account_number,tempnumber))
        {
            printf("\n%s\t%s\t%d", account_Quantity[i].account_number,account_Quantity[i].owner_name,account_Quantity[i].balance);
        }        
    }
}
void search_by_name(Account account_Quantity[], int *numbers_of_accounts)
{
    char tempname[NAMESIZE];
    printf("Ange Namn: ");
    scanf("\n%[^\n]%*c", tempname);
    for (int i = 0; i < *numbers_of_accounts; i++)
    {
        if (strstr(account_Quantity[i].owner_name, tempname))
        {
            printf("\n%s\t%s\t%d", account_Quantity[i].account_number,account_Quantity[i].owner_name,account_Quantity[i].balance);   
        }
        
    }
}
void search_by_balance(Account account_Quantity[], int *numbers_of_accounts)
{
    int min,max;
    printf("Ange min:");
    scanf("%d", &min);
    printf("\nAnge max:");
    scanf("%d",&max);
    for (int i = 0; i < *numbers_of_accounts; i++)
    {
        if(min<= account_Quantity[i].balance && account_Quantity[i].balance <=max)
        {
            printf("%s\t%s\t%d\n", account_Quantity[i].account_number,account_Quantity[i].owner_name,account_Quantity[i].balance);
        }
        
    }
    
}
void change_account_balance_menu(Account account_Quantity[], int *numbers_of_accounts)
{
    char userinput_;
    printf("Ange sok satt");
    print_change_balance_menu();
    while(userinput_!='3')
    {
        scanf("%c", &userinput_);
        switch (userinput_)
        {
        case '1': search_by_number(account_Quantity,numbers_of_accounts); deposit_withdraw_menu(account_Quantity,numbers_of_accounts); break;
        case '2': search_by_name(account_Quantity,numbers_of_accounts); deposit_withdraw_menu(account_Quantity, numbers_of_accounts); break;
        }
    }
}
void deposit_withdraw_menu(Account account_Quantity[], int *numbers_of_accounts)
{
    char tempnumber[ACCOUNT_NUMBER_MAX];
    int userinput;
    printf("\nAnge kontonummer: ");
    scanf("%[^\n]%*c", tempnumber);
    printf("\nAnge insattning, uttdrag eller tillbaka till meny");
    printf("(1) Insattning\n(2) Uttdag\nAnge val: ");
    while (userinput!=3)
    {
        scanf("%d",&userinput);
        switch (userinput)
        {
            
        case 1:deposit(account_Quantity,numbers_of_accounts,tempnumber);break;
        case 2:withdraw(account_Quantity,numbers_of_accounts,tempnumber); break;
        }
        
    }
}
void deposit(Account account_Quantity[], int *numbers_of_accounts,char tempnumber[])
{
    int tempbalance;
    int index;
    printf("Ange belopp: ");
    scanf("%d", &tempbalance);
    for (int i = 0; i < *numbers_of_accounts; i++)
    {
        if(strcmp(tempnumber,account_Quantity[i].account_number)==0)
        {
            account_Quantity[i].balance = account_Quantity[i].balance +tempbalance ;
            index=i;
        }
    }
    printf("\nNytt Saldo: %d", account_Quantity[index].balance);
    goto *main();
    
}
void withdraw(Account account_Quantity[], int *numbers_of_accounts, char tempnumber[])
{
    int tempbalance;
    int index;
    printf("Ange belopp: ");
    scanf("%d", &tempbalance);
    for (int i = 0; i < *numbers_of_accounts; i++)
    {
        if(strcmp(tempnumber,account_Quantity[i].account_number)==0)
        {
            account_Quantity[i].balance = account_Quantity[i].balance - tempbalance;
            index=i;
        }
    }
    printf("\nNytt Saldo: %d", account_Quantity[index].balance);
    goto *main();
}
void delete_account_menu(Account account_Quantity[], int *numbers_of_accounts)
{
    printf("Avregistrera");
    int userinput;
    printf("Ange sok satt");
    print_change_balance_menu();
    while(userinput!=3)
    {
        scanf("%d", &userinput);
        switch (userinput)
        {
        case 1: search_by_number(account_Quantity,numbers_of_accounts);  break;
        case 2: search_by_name(account_Quantity,numbers_of_accounts);  break;
        }
    }
}
void delete_account(Account account_Quantity[], int *numbers_of_accounts)
{
    char tempnumber[ACCOUNT_NUMBER_MAX];
    printf("Ange Kontonummer");
    for (int i = 0; i < *numbers_of_accounts; i++)
    {
        if(strcmp(tempnumber,account_Quantity[i].account_number)==0)
    }
}
void save_bank(Account account_Quantity[], int *numbers_of_accounts)
{
    FILE *pbankfile;
    printf("Spara... ");
    if ((*pbankfile=fopen("data.txt","w")))
    {
        for (int i = 0; i < *numbers_of_accounts; i++)
        {
            fprintf(pbankfile, "%s","%s", "%d\n",
            account_Quantity[i].account_number,
            account_Quantity[i].owner_name,
            account_Quantity[i].balance);
            printf("*");
        }
    }
    else
        printf("ERROR kunde inte spara filen");
    fclose(pbankfile);
}
void load_bank(Account account_Quantity[], int *numbers_of_accounts)
{
    FILE *pbankfile;
    printf("Laddar...");
    if((pbankfile=fopen("data.txt","r"))
    {
        while (fscanf(pbankfile, "%s" "%s" "%d",
        account_Quantity[*numbers_of_accounts].account_number,
        account_Quantity[*numbers_of_accounts].owner_name,
        account_Quantity[*numbers_of_accounts].balance)==3)
        {
            (*numbers_of_accounts)++;
            printf("*");
        }
        else
            printf("ERROR Kunde inte ladda upp filen");
        fclose(pbankfile);
    }
}
Account intitaccount(char account_number[],char ownername[], int balance)
{
    Account new_account;
    strcpy(new_account.account_number, account_number);
    strcpy(new_account.owner_name,ownername);
    new_account.balance =balance;
    return new_account;

}
int main(void)
{
    Account account_Quantity[ACCOUNTMAX]; // Numbers of accounts that exist.
    account_Quantity[0]=intitaccount("123434", "HEJ PADIG", 50);
    account_Quantity[1]=intitaccount("123433", "TEST LMAO", 300);
    account_Quantity[2]=intitaccount("123432", "HATAR C", 100);
    int numbers_of_accounts=3;
    int userinput;
    while (userinput != 7)
    {
        startMenu();
        scanf("%d",&userinput);
        switch (userinput)
        {
            case 1: startMenu(); register_new_account(account_Quantity, &numbers_of_accounts); break;
            case 2: print_all_accounts(account_Quantity, &numbers_of_accounts); break;
            case 3: sort_account_menu(account_Quantity,&numbers_of_accounts); break;
            case 4: search_account_menu(account_Quantity,&numbers_of_accounts); break;
            case 5: change_account_balance_menu(account_Quantity,&numbers_of_accounts); break;
            case 6: break;
        }
    } 
}