#include <stdio.h>
int main()
{
    int a, countE = 0, countO = 0;
    int sumE = 0, sumO = 0;
    printf("Enter 10 Number\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter %d Number : ", i);
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            countE++;
            sumE = sumE + a;
        }
        else
        {
            countO++;
            sumO = sumO + a;
        }
    }

    printf("The Total Even Number Is : %d And Sum is : %d\n", countE, sumE);
    printf("The Total Odd Number Is : %d And Sum is : %d\n", countO, sumO);

    return 0;
}
