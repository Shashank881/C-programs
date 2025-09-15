#include<stdio.h>
#include<conio.h>
int a,b,c;
void sum();
void show();
int main()
{
    printf("Enter the two values");
    scanf("%d%d",&a,&b);
    sum();
    show();
}
void sum()
{
    c=a+b;
}
void show()
{
    printf("The sum is %d",c);
}