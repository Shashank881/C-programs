#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,m;
printf("Enter five numbers ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
m=a;
if(b>m)
{
m=b;
}
if(c>m)
{
m=c;
}
if(d>m){
m=d;
}
if(e>m)
{
m=e;
}
printf("Max value is %d",m);

}
