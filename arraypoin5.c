#include<stdio.h>
#include<conio.h>
int main()
{

float arr[]={23.33,34.55,45.00,67.00},*p;
p=arr;
printf("%f\n",*p);
p++;//It will increase by 4 byte because of float.
printf("%f",*p);

}
