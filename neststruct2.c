#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    struct empinfo
    {
        char name[20];
        int age,salary;
         
         struct employee
         {
            int hra,da,ta;
            char remark[10];
         }emp;

    };
    struct empinfo obj;
    obj.emp.hra=5000;
    obj.emp.da=3000;
    obj.age=20;
    strcpy(obj.name,"Shashank");
    strcpy(obj.emp.remark,"A1");

    printf("%d\n",obj.emp.hra);
    printf("%d\n",obj.emp.da);
    printf("%s\n",obj.emp.remark);
    printf("%d\n",obj.age);
    printf("%s",obj.name);
}