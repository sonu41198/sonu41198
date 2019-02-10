#include<stdio.h>
int main()
{
int a[50],falg=0,n,num,i;
scanf("%d %d",&n,&num);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==num)
{
falg=1;
}
}
if(falg==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
