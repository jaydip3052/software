#include<stdio.h>
int main()
{
    int a,b=0,c=1,d;
    
    printf("Enter Your Number To Get Fibbonacci Series : ");
    scanf("%d",&a);
    printf("%d\t",c);
    d=b+c;

    while(d<=a)
    {
        printf("%d\t",d);
        b=c;
        c=d;
        d=b+c;
    }

    return 0;
}