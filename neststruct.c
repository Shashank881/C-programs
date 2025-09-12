#include<stdio.h>
#include<conio.h>
int main()
{
    struct demo
    {
        int a,b,c;
    };
    struct test
    {
        int x,y;
    };
    struct person
    {
        int z;
        struct demo n;
        struct test m;
    };
    struct person obj;
    obj.n.a=10;
    obj.n.b=20;
    obj.n.c=obj.n.a+obj.n.b;

    printf("%d",obj.n.c);
    

}