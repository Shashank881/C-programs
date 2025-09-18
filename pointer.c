#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,*p;
    p=&a;
    printf("%d %u %d",a,&p,*p);
}