#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(1*sizeof(int));
    *p=100;

    printf("Value %d %u ",*p,p);
}