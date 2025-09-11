#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    struct emp
    {
        char name[20];
        int bs;
        float hra,da,ta;
    };
    struct emp n;
    strcpy(n.name,"Shashank");
    n.bs=50000;
   

    printf("%s\n",n.name);
    printf("%d\n",n.bs);
   
    

    
}