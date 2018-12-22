#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("enter the number:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("invalid option");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			printf("Hello\n");
		}
	}	
	return 0;
}
