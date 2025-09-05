#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,max,min;
    printf("Enter 10 elements");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    min=a[0];
    max=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)
         max=a[i];
         else
         if(a[i]<min)
         min=a[i];
    }
    printf("Maximum value of array is %d and Minimum value is %d",max,min);
}