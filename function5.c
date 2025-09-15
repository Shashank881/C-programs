#include<stdio.h>
#include<conio.h>
void input(int[]);
void show(int[]);
int main()
{
    int list[10];
    input(list);
    show(list);
}
void input(int x[])
{
    int i;
    printf("Enter 10 values");
    for(i=0;i<10;i++)
    scanf("%d",&x[i]);
}
void show(int y[])
{
    int i;
    printf("Result is:");
    for(i=0;i<10;i++)
    printf("\n%d",y[i]);
}