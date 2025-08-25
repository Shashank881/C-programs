#include<conio.h>
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter four values");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
     if(a>c)
     if(a>d)
     printf("Max value is %d",a);
     else
     printf("Max value is %d",d);
    else
     if(c>d)
     printf("Max value is %d",b);
     else
     printf("Max value is %d",d);
    else
    if(b>c)
     if(c>d)
     printf("Max value is %d",c);
     else
     printf("Max value is %d",d);
    else
    if(c>d)
    printf("Max value is %d",c);
    else
    printf("Max value is %d",d);
}