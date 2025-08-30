#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,sum=0;
    long int f=1;
    printf("Enter a value ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+f;
    }
    printf("Factorial of 1,2,3,4... %d is %d",n,sum);
}