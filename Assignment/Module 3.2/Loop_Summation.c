#include <stdio.h>
int main()
{   
    int a, r, sum = 0;
    printf("Enter number : ");
    scanf("%d", &a);
    while (a != 0)
    {
        r = a % 10;
        sum = sum + r;
        a = a / 10;
    }
    printf("Total Sum of = %d", sum);
    return 0;
}