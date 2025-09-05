#include<conio.h>
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter 10 elements");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }   
    avg=sum/10.0;
    printf("Sum of all elements is %d and Average of all elements is %f",sum,avg);

}