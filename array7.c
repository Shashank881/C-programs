#include<conio.h>
#include<stdio.h>
int main()
{
    int a[11],i,n,p;
    printf("Enter 10 values");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    printf("Enter the new value and its position");
    scanf("%d%d",&n,&p);
    p=p-1;
    for(i=10;i>p;i--)
    a[i]=a[i-1];
    a[p]=n;

    printf("After insertion");
    for(i=0;i<11;i++)
    printf("%d\n",a[i]);

}