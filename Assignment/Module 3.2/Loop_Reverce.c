 #include<stdio.h>
 int main()
 {
    int a,n,r;
    printf("Enter number : ");
    scanf("%d",&a);
    printf("Reverce Number is = ");
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        printf("%d",r);
    }
 }