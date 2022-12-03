#include <stdio.h>
int main()
{
    int a;
    printf("Enter Your Number To Check Even Or Odd : ");
    scanf("%d", &a);
    (a % 2 == 0) ? printf("%d Number Is Even\n", a) : printf("%d Number Is Odd\n", a);

    return 0;
}