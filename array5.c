#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,n;
    printf("Enter 10 values");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    printf("Enter value to be search");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            printf("Value found %d position",i+1);
            break;
        }
    }
    if(i==10)
    printf("Value not found");
    
}