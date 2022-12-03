#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Value For Swapping : ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping : ");
    printf("%d %d\n", a, b);
    printf("After Swapping : ");
    printf("%d %d\n", b, a);

    return 0;
}