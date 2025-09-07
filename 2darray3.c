#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter 3x3 matrix to transpose");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        b[j][i]=a[i][j];
    }
    printf("Transpose Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }
}