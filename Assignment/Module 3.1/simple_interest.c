#include <stdio.h>
int main()
{
    int principle, rate, time;
    int si;
    printf("enter your principle amount , rate of interrest and time : ");
    scanf("%d %d %d", &principle, &rate, &time);
    si = (principle * rate * time) / 100;
    printf("your final amount is %d", si);

    return 0;
}