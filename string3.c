#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[30],str2[30];
    int i;
    printf("Enter a string");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("Copied: %s",str2);
}