#include<stdio.h>
#include<conio.h>
void input(int[],int);
void show(int[],int);
int sum(int[],int);
void search(int[],int,int);
int main()
{
int list[10],data[20],n,add;
input(list,5);
show(list,5);
add=sum(list,5);
printf("\nSum of values are %d",add);
printf("\nEnter value to be search");
scanf("%d",&n);
search(list,5,n);
getch();
}
void input(int x[],int a)
{
int i;
printf("Enter 5 value");
for(i=0;i<a;i++)
scanf("%d",&x[i]);
}
void show(int y[],int b)
{
int i;
printf("Values are:");
for(i=0;i<b;i++)
printf("\n%d",y[i]);
}
int sum(int z[],int c)
{
int i,a=0;
for(i=0;i<c;i++)
a=a+z[i];
return a;
}
void search(int w[],int d, int n)
{
int i;
for(i=0;i<d;i++)
{
if(w[i]==n)
{
printf("\nValue found at position %d",i+1);
 break;
 }
else
if(w[i]==d)
printf("Value not found");
}
}
