#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i,j;
printf("enter the value:");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<=i;j++)
{
if(i%j!=0)
{
printf("%d is prime\n",i);
break;
}
else
{
break;
}
}
}
return 0; 
}
