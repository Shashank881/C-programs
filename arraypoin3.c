#include<stdio.h>
#include<conio.h>
int main()
{
int arr[]={10,20,30,40,50};
int data[]={100,200,300,400,500},*p;
p=arr;//Assigns the base address of arr in pointer p.
printf("%u %u\n",&p,arr);
printf("%d\n",(*(p+2)*10));
}
