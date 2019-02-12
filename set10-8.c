#include <stdio.h>
int main(void) 
{
	int x,a[30],i;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=x;i++)
	{
		if(i!=a[i])
		{
			printf("\n%d",i);
			break;
		}
	}
 
	return 0;
}
