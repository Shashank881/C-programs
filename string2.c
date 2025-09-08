#include<stdio.h>
#include<conio.h>
int main()
{
    char str[40];
    int i,c=0,s=0;
    printf("Enter a string");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        s++;
        else
        c++;
    }
    printf("Length is %d spaces is %d character is %d word is %d",s+c,s,c,s+1);
}