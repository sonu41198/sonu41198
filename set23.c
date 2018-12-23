#include<stdio.h>
#include<conio.h>
int main()
{
int a,i;
printf("enter value:");
scanf("%d",&a);
for( i=2;i<=a;i++)
{
if(a%i!=0)
{
printf("Yes");
break;
}
else
{
printf("No");
}
}
return 0;
}
