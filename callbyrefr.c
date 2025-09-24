/*This program will call the address of values and then swap it. */
#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("A is %d and B is %d",a,b);
}
void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}