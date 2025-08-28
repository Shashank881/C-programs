#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("Reverse of number is %d",sum);
}