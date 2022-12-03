#include <stdio.h>
int main()
{
    int a;
    printf("Please Enter Number : ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d*%d=%d\n", i, j, i * j);
        }
    }

    return 0;
}