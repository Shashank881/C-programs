#include<stdio.h>
#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character ");
    scanf("%c",&x);
    if(x>=97 && x<=122)
     {
        x=x-32;
        printf("After conversion %c",x);
     }
    else
    printf("You entred a wrong value");
}