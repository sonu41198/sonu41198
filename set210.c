#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a;
	printf("enter the number:");
	scanf("%d",&n);
	a=n;
	printf("%d\t",n);
	for(i=1;i<5;i++)
	{   
		a=a+n;
		printf("%d\t",a);
	}
	return 0;
}
