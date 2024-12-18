#include <stdio.h>

int main()
{
    int i;

    for (i = 10; i >= 0; i--)
{
    if (i != 0)
        printf("%d\n", i);
    else
        printf("Happy New Year!\n");
}
}