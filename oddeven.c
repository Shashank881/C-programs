#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r;
    printf("Enter a value");
    scanf("%d",&n);
    r=n%2;
    if(r==0)
     printf("Even value");
     else
     printf("Odd value");
}