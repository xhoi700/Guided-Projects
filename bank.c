#include "bank.h"
#include <stdio.h>

void viewBalance(BankClient clients[], int size, int accountNumber)
{
    int i;
    int found = 0;

    for (i = 0; i < size; i++)
    {
        if (clients[i] == accountNumber)
        {
            printf("Account balance is %.2f", clients[i].balance);
        }
        found = 1;
        break;
    }
}

void deposit(BankClient clients[], int size, int accountNumber, float amount)
{
    int i;

    for (i = 0; i < size; i++)
    {
        
    }
}