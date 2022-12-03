#include <stdio.h>
int main()
{
    int num;
    int fact = 1;
    printf("Enter Your Number To Find Factorial : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Number Of %d Factorial Is = %d", num, fact);

    return 0;
}