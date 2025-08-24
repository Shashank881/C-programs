#include<stdio.h>
#include<conio.h>
int main()
{

float bs,hra,da,ta,gs,tax,ns;
printf("Enter basic salary");
scanf("%f",&bs);
hra=40*bs/100;
da=30*bs/100;
ta=20*bs/100;
gs=bs+hra+da+ta;
tax=5*gs/100;
ns=gs-tax;
printf("Your net salary is % f",ns);

}