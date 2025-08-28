#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter a value");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
        i++;
    }
}