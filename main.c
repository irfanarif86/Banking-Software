#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int list();
void deposit();
void withdraw();
void transfer();
void checkDetail();
void last();
int TotalAmount = 1000, Amount, Amo, Tr, TotalDeposit = 0, TotalWith = 0, TotalTr = 0;
int Acc;
char a[50];
void main()
{
    system("cls");
    printf("Enter your name: ");
    gets(a);
    printf("Enter your Account Number: ");
    scanf("%d", &Acc);
    while (1)
    {
        system("cls");
        switch (list())
        {
        case 1:
            deposit();
            TotalDeposit += Amount;
            break;
        case 2:
            withdraw();
            if (Amo <= TotalAmount)
            {
                TotalWith += Amo;
            }
            break;
        case 3:
            transfer();
            if (Tr <= TotalAmount)
            {
                TotalTr += Tr;
            }
            break;
        case 4:
            checkDetail();
            break;
        case 5:
            system("cls");
            last();
            getch();
            exit(0);
        default:
            printf("\nInvalid Choice...");
        } // End of switch
        getch();

    } // End of while loop
}

int list()
{
    int ch;
    printf("\n1. Deposit Amount: ");
    printf("\n2. Withdraw Amount: ");
    printf("\n3. Transfer Amount: ");
    printf("\n4. Check Detail: ");
    printf("\n5. Exit: ");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    return (ch);
}

void deposit()
{
    printf("\nEnter the amount you want to deposit: ");
    scanf("%d", &Amount);
    TotalAmount += Amount;
}
void withdraw()
{
    printf("\nEnter the amount you wish to withdraw: ");
    scanf("%d", &Amo);
    if (Amo <= TotalAmount)
    {
        TotalAmount -= Amo;
    }
    else
    {
        printf("\nYou dont have sufficient balance");
    }
}

void transfer()
{
    printf("\nEnter the amount you want to transfer: ");
    scanf("%d", &Tr);
    if (Tr <= TotalAmount)
    {
        TotalAmount -= Tr;
    }
    else
    {
        printf("\nYou dont have enough balance to transfer");
    }
}

void checkDetail()
{
    printf("\nTotal Amount: %d", TotalAmount);
    printf("\nTotal Deposited Amount: %d", TotalDeposit);
    printf("\nTotal Withdrawn Amount: %d", TotalWith);
    printf("\nTotal Transfered Amount: %d", TotalTr);
}
void last()
{
    printf("\n****************************************\n");
    printf("\nYour Name : %s", a);
    printf("\nAccount Number : %d", Acc);
    printf("\nTotal Amount: %d", TotalAmount);
    printf("\nTotal Deposited Amount: %d", TotalDeposit);
    printf("\nTotal Withdrawn Amount: %d", TotalWith);
    printf("\nTotal Transfered Amount: %d", TotalTr);
    printf("\n \n******THANKS******");
}