#include<stdio.h>
#include<conio.h>
void sum();
int  main()
{


    sum();
}

void sum()
{
    int a,b,z;
    printf("Enter the two values");
    scanf("%d%d",&a,&b);
    z=a+b;
    printf("Sum is %d",z);
}