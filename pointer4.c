#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=20,*p;
    p=&b;
    a=a+a;
    b=a+b;
    *p=b+*p+a;
    a=*p*b;
    printf("%d %d %d",a,b,*p);

}