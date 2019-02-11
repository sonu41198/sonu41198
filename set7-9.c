#include <stdio.h>

int main(void) 
{
	int n1,n2,dif;
	printf("enter the number1:");
	scanf("%d",&n1);
	printf("enter the number2:");
	scanf("%d",&n2);
	dif=n1-n2;
	if(dif%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
