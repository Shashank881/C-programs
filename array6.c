#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,j,c;
    printf("Enter 10 value");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    printf("Sorted 10 values");
    for(i=0;i<10;i++)
    printf("%d\n",a[i]);
}