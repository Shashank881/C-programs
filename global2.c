#include<stdio.h>
#include<conio.h>
int a=40;
int main()
{
    int a=10;
    clrscr();
    printf("%d %d",a,::a);
    a=a+30;
    ::a=::a+a;
    a=::a+a;
    a=::a+10;
    printf("%d %d",a,::a);
}