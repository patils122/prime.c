#include<stdio.h>
#include <conio.h>
int main()
{
int n,i,flag=0,m;
printf("Enter the number:");
scanf("%d",&n);

if(n==0 || n==1)
flag=1;
m=n/2;
for(i=2; i<=m;i++)
{
    if(n%i==0)
    {
        flag=1;
        break;
    }
}
if(flag==0)
    printf("Number is prime");
    else
    printf("Number is not prime");
return 0;

}