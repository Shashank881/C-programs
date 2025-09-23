#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *p,n,i;
    printf("How many values want to input");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d values",n);
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);

    printf("Result\n");
    for(i=0;i<n;i++)
    printf("%d\n",p[i]);
}