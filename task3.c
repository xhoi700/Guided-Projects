#include <stdio.h>

int main()
{
   int grade;
    printf("enter the grade : ");
    scanf("%d", &grade);

    if (grade >= 90)
    {
        printf("A\n");
    }
    if (grade >= 80 && grade <= 89)
    {
        printf("B\n");
    }
    if (grade >= 70 && grade <= 79)
    {
        printf("C\n");
    }
    if (grade >= 60 && grade <= 69)
    {
        printf("D\n");
    }
    if (grade < 60)
    {
        printf("F\n");
    }
    return (0);


}