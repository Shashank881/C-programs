#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,t,sum=0,r;
    long int f=1;
    printf("Enter a value to check");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        f=1;
        i=1;
        while(i<=r)
        {
            f=f*i;
            i++;
        }
        sum=sum+f;
        n=n/10;
    }
    if(sum==t)
        printf("Strong number");
        else
        printf("Not a strong number");
}