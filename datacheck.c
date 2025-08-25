#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("Enter any data");
    scanf("%c",&x);
    if(x>=65 && x<=90)
     printf("You entered a capital letter");
    else
    if(x>=97 && x<=122)
     printf("You entred a small letter");
    else
    if(x>=48 && x<=57)
     printf("You entred a number");
     else
     printf("You entred a symbol"); 
}