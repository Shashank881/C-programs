#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=20,*p;
    p=&a;
    a=a+b;
    b=*p+10;
    *p=*p+a;
    a=*p+b;
    printf("%d %d %d",a,b,*p);

}