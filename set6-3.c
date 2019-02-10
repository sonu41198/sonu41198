#include <stdio.h>
 
int main(void) 
{
	int n,temp,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		temp=n%10;
		sum=sum+temp;
		n=n/10;
 
	}
	printf("\n%d",sum);
	return 0;
}
