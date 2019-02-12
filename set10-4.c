#include <stdio.h>

int main(void) 
{
	int i,a,k,array[20];
	scanf("%d %d",&a,&k);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<=a;i++)
	{
		while(i==k)
		{
			printf("\n%d",array[i]);
			break;
		}
	}
	return 0;
}
