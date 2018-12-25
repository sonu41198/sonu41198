#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i;
	printf("enter the two numbers:");
	scanf("%d %d",&a,&b);
	for(i=a+1;i<=b;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
		}	
	}
	return 0;
}
