#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter a number to check");
    scanf("%d",&n);
    i=2;
    while(i<=n-1)
    {
        if(n%i==0)
         break;
    i++;
    }
    if(i==n)
    printf("Prime number");
    else
    printf("Not a prime number");

}