#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,t;
    printf("Enter a value ");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        t=n*i;
        printf("%dx%d=%d",n,i,t);
        i++;
    }
}