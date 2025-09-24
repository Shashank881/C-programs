#include<stdio.h>
#include<conio.h>
void input(int *,int);
void show(int *,int);
int main()
{
    int list[10];
    input(list,5);
    show(list,5);
}
void input(int *p,int s)
{
    int i;
    printf("Enter %d values",s);
    for(i=0;i<s;i++)
    scanf("%d",&p[i]);
}
void show(int *p, int s)
{
    int i;
    printf("Result\n");
    for(i=0;i<s;i++)
    printf("%d\n",p[i]);
}