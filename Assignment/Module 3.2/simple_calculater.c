#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Please chose a option\n");
    printf("1.Addition\n");
    printf("2.Substrac\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.modules\n");
    printf("Enter the number in this option : ");
    scanf("%d", &a);
    printf("You have chosen a %d\n", a);

    if (a == 1)
    {
        printf("Please enter two value for Addition : ");
        scanf("%d %d", &b, &c);
        printf("The value of %d and %d sum is %d", b, c, b + c);
    }
    else if (a == 2)
    {
        printf("Please enter two value for Substrac : ");
        scanf("%d %d", &b, &c);
        printf("The value of %d and %d Substrac is %d", b, c, b - c);
    }

    else if (a == 3)
    {
        printf("Please enter two value for Multiplication : ");
        scanf("%d %d", &b, &c);
        printf("The value of %d and %d Multiplication is %d", b, c, b * c);
    }
    else if (a == 4)
    {
        printf("Please enter two value for division : ");
        scanf("%d %d", &b, &c);
        printf("The value of %d and %d division is %f", b, c, b / c);
    }
    else if (a == 5)
    {
        printf("Please enter two value for Modules : ");
        scanf("%d %d", &b, &c);
        printf("The value of %d and %d Modules is %d", b, c, b % c);
    }
    else
    {
        printf("Please chosen a correct option ");
    }

    return 0;
}