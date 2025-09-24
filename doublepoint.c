/*If we want to store a pointer's address on another pointer then we will use the 
double pointer.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int b=20,*p,**z;
    p=&b;
    z=&p;
    printf("%d %d %d",z,*z,**z);
}