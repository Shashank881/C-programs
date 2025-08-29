#include<stdio.h>
#include<conio.h>
int main()
{
    int n,c;
    printf("Enter a number to count its digits");
    scanf("%d",&n);
    c=0;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    printf("The total digits is %d",c);
}