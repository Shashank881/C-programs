#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,c=1,n;
    printf("Enter the terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
}