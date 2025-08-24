#include<stdio.h>
#include<conio.h>
int main()
{
    float p,c,m,sum,per,pm,cm,mm,max;
    printf("Enter the marks of P,C,M");
    scanf("%f%f%f",&p,&c,&m);
    
    printf("Enter the maximum marks of P,C,M");
    scanf("%f%f%f",&pm,&cm,&mm);

    sum=p+c+m;
    max=pm+cm+mm;
    per=sum*100/max;
    
    printf("Your obtained marks %f form %f and percanatge is %f",sum,max,per);
}