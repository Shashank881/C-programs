#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,c=0;
    printf("Enter a start and end value ");
    scanf("%d%d",&i,&n);
    while(i<=n)
    {
        j=2;
           while(j<=i/2)
           {
            if(i%j==0)
               break;
            j++;
           }
           if(j>i/2)
           {
            printf("%d\t",i);
            c++;
           }
      i++;
    }
    printf("Number of prime value %d",c);
}