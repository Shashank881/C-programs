#include<stdio.h>
#include<conio.h>
int main()
{
    struct empinfo
    {
        char name[20];
        int age,salary;

         struct employee
         {
            int hra,da;
            char remark[10];
         }emp;
    };

        struct empinfo obj={"Shashank",18,2000,{4000,3000,"A1"}};
        printf("%s\n",obj.name);
        printf("%d\n",obj.age);
        printf("%s",obj.emp.remark);
}