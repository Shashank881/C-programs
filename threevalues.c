#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
     if(a>c)
     printf("Max is %d",a);
     else
     printf("Max is %d",c);
    else
     if(b>c)
     printf("Max is %d",b);
     else
     printf("Max is %d",c); 
}