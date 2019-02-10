#include<stdio.h>
#include<conio.h>
int main()
{
int a[50],i,n,sum=0,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
t=sum/n;
printf("%d",t);
return 0;
}
