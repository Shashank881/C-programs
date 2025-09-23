#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(10*sizeof(int));
    *p=100;
    printf("Value %d first address %u\n",*p,p);
    p++;
    *p=200;
    printf("Value %d second address %u",*p,p);
}