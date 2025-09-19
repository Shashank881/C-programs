#include<stdio.h>
#include<conio.h>
int main()
{
    int value[]={100,200,300,400,500},*p;
    p=value;
    printf("%d\n",*p);
    p++;//it will always increase by two byte because it is an integer.
    printf("%d",*p);

}