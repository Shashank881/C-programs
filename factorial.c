#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n;
    long int f=1;
    printf("Enter a value for factorial");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("Factorial of %d is %d",n,f);
}