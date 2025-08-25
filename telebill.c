#include<stdio.h>
#include<conio.h>
int main()
{
    int calls;
    float bill,tax,nbill;
    printf("Enter the telephone bills");
    scanf("%d",&calls);
    if(calls<=200)
     bill=0.00;
    else
    if(calls<=300)
     bill=(calls-200)*1.00;
    else
    if(calls<=500)
     bill=100+(calls-300)*2.0;
    else
    bill=100+400+(calls-500)*3.0;
  bill=bill+200;
  tax=12*bill/100;
  nbill=bill+tax;
  printf("Your bill amount is %f tax is %f netbill is %f",bill,tax,nbill);

}