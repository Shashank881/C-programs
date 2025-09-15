#include<stdio.h>
#include<conio.h>
void fun();
int main()
{
    int a=10;// a is local variable and it works only till the end of this function.
    printf("Value is %d and address %u",a,&a);
    printf("\n");
    
    fun();
}
void fun()
{
    int a=20;
    printf("I am in fun() and my value is %d and address is %u",a,&a);
}