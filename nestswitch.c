#include<stdio.h>
#include<conio.h>
int main()
{

int n,b;
n=2;
b=2;
switch(n)
{
case 1:switch(b)
     {
      case 1:printf("Rajasthan");
	     break;
      case 2:printf("Jaipur");
	      break;
      }
      break;
case 2:switch(b)
      {
      case 1:printf("Punjab");
	        break;
      case 2:printf("Chandigarh");
	     break;
      }
}
}