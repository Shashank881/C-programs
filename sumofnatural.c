#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter a value ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of 1+2+3+4....upto %d is %d",n,sum);
}