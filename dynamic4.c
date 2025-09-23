#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    float *p;
    p=(float*)malloc(4*sizeof(float));
    *p=22.33;
     printf("Value %f first address %u\n",*p,p);
    p++;
    *p=30.44;
    printf("Value %f second address %u",*p,p);
}