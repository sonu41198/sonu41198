#include<stdio.h>
int main(void)
{
	int s,i,a,b,c;
	printf("enter the number:");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		a=pow(2,i);
		if(a>s)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("\n%d",c);
	
	return 0;
}
