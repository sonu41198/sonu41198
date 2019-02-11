#include <stdio.h>

int main(void) 
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%7==0)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
