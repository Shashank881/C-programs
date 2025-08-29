#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,sum=0,t;
    printf("Enter a number to check ");
    scanf("%d",&n);
    t=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(t==sum)
    printf("Armstrong number");
    else
    printf("Not Armstrong");    
}