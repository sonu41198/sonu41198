#include <stdio.h>

int main(void) 
{
int x,y,r,lcm,gcd,a,b;
printf("\n enter the first number:");
scanf("%d",&x);
printf("\n enter the second number:");
scanf("%d",&y);
a=x;
b=y;
do
{
r=x%y;
if(r==0)
break;
x=y;
y=r;
}while(r!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("\n the lcm of the given number is: %d",lcm);
return 0;
}
