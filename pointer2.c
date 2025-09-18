#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,*p;
    p=&a;
    printf("%d %d\n",a,*p);
    a=a+20;
    printf("%d %d",a,*p);
}