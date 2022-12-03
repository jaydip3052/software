#include <stdio.h>
int main()
{
    int a, r, rem;
    printf("Enter Your Number : ");
    scanf("%d", &a);
    r = a % 10;
    a = a / 10;
    while (a != 0)
    {
        rem = a % 10;
        a = a / 10;
    }

    printf("Addition is = %d", r + rem);

    return 0;
}

/*
For Array
int a[10],b;
for(int i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
b=a[0]+a[9];
printf("%d",b);*/


