#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    switch (n)
    {
        case 1:printf("Monday");
               break;
        case 2:printf("Tuesday");
               break;
        case 3:printf("wednesday");
               break;
        case 4:printf("Thrusday");
               break;
        case 5:printf("Friday");
               break;
        case 6:printf("Saturday");
              break;
        case 7:printf("Sunday");
              break;
        default:printf("You entred wrong number");
              break;
    }
}