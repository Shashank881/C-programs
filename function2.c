#include<stdio.h>
#include<stdio.h>
int sum();
int main()
{
    int c;
    c=sum();
    printf("Sum is %d",c);
}
int sum()
{
    int a,b,z;
    printf("Enter the two values");
    scanf("%d%d",&a,&b);
    z=a+b;
    return z;
}