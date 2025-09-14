#include<stdio.h>
#include<conio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("Enter two values");
    scanf("%d%d",&a,&b);
    sum(a,b);
}
void sum(int x,int y)
{
    int z;
    z=x+y;
    printf("Sum is %d",z);
}