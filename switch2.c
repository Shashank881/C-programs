#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three values");
    scanf("%d%d%d",&a,&b,&c);
    switch (a>b)
    {
        case 1:switch(a>c)
        {
            case 1:printf("Max value is %d",a);
                   break;
            case 0:printf("Max value is %d",c);
                   break;
        }
        break;
        case 0:switch(b>c)
        {
            case 1:printf("Max value is %d",b);
                  break;
            case 0:printf("Max value is %d",c);
                  break;
        }
        break;
    }
}