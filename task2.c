#include <stdio.h>

int main()
{
    int pass = 4242;
    int insert;

    printf("Enter password :");
    scanf("%d",&insert);

    if (insert == pass)
    {
        printf("Access Granted");
    }
    else
    {
        printf("Access Denied");
    }

    return (0);
}