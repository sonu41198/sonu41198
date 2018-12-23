#include<stdio.h>
#include<conio.h>
int main()
{
	int  n,rem,temp,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("%d is palindrome",temp);
	}
	else
	{
		printf("%d is not palindrome",temp);
	}
	return 0;
}
