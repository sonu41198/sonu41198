#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
if(n%2==0)
{
  printf("%d is even",n);
}
else if(n<0)
{
  printf("invalid input");
}  
else
{
  printf("%d is odd",n);
}
return 0;
}
