#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,i=1;
    long int p=1;
    printf("Enter value of x and y");
    scanf("%d%d",&x,&y);
    while(i<=y)
    {
        p=p*x;
        i++;
    }
    printf("The value is %d",p);
}