#include<stdio.h>
int main()
{
int n[50],i,count=0;
scanf("%d",&n);
for(i=0;n[i]!='\0';i++)
{
count++;
}
printf("%d",count);
return 0;
}
