#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("Enter the terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==n||i==1)
        for(j=1;j<=n;j++)
        printf(" *");
        else
        {
            printf(" *");
            for(j=1;j<=n-2;j++)
            printf("  ");

            printf(" *");
        }
        printf("\n");
    }
}