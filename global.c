#include<stdio.h>
#include<conio.h>
int a=50;//a is global variable and it work till the end of this program.
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
    int b=20;
    printf("Value of a is %d and b is %d ",a,b);
}