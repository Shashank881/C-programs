#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main()
{
    int a,b,c;
    printf("Enter two values");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("Sum is %d",c);
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}