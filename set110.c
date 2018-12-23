#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("count is=%d",count);
	return 0;
}
