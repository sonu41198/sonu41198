#include<stdio.h>
#include<conio.h>
int main()
{
int a,t,r,s=0;
printf("enter the number:");
scanf("%d",&a);
t=a;
while(a)
{
r=a%10;
s=s+(r*r*r);
a=a/10;
}
if(t==s)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
