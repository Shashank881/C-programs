#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[30],str2[30];
    int i;
    printf("Enter two string");
    gets(str1);
    gets(str2);
    {
        strcat(str1,str2);
    }
    printf("Concentated string: %s",str1);
}