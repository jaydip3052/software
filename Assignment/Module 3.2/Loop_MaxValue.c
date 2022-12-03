#include <stdio.h>
int main()
{
    int a, n, r;
    int max = 0;
    int min;
    printf("Enter number : ");
    scanf("%d", &a);
    printf("Max Number is = ");
    while (a != 0)
    {
        r = a % 10;
        a = a / 10;
        if (r > max)
        {
            max = r;
        }
    }
    printf("%d\n", max);
    return 0;
}