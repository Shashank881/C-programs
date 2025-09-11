#include<stdio.h>
#include<conio.h>
int main()
{
    char str[30];
    int i,l,k,j;
    printf("Enter a string");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    l=i;
    i=i-1;
    for(j=0,k=i;j<=l/2;j++,k--)
    {
        if(str[j]!=str[k])
        break;
    }
    if(j>l/2)
    printf("Palindrome");
    else
    printf("Not palindrome");

}