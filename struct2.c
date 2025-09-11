#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    struct emp{
        char name[20];
        int age;
        float bs;
    };
    struct emp obj1,obj2;
    printf("Enter name age and bs");
    gets(obj1.name);
    scanf("%d%f",&obj1.age,&obj1.bs);
    strcpy(obj2.name,obj1.name);
    obj2.age=obj1.age;
    obj2.bs=obj1.bs;
    printf("Copied data %s %d %f",obj2.name,obj2.age,obj2.bs);
}