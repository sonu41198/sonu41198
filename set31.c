#include <stdio.h>
int main()
{
    int a[50],n,i,max;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("max=%d",max);

    return 0;
}
