#include<stdio.h>
#include<conio.h>
int main()
{
    char str[] = "ICON";
    int i;   // use int instead of char for index
    for(i=0; str[i] != '\0'; i++)
        printf("%c\n", str[i]);

    return 0;
}
