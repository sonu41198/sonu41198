#include <stdio.h>

int main(void) 
{
	int n,i;
	scanf("%d",&n);
	int num1,rem;
	while(n!=1)
	{
	rem=n%2;
	num1=n/2;
	printf("%d\n",num1);
	n=rem;
	break;
	}
	return 0;
}
