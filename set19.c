#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[50],k,i,n,sum=0;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the kth value:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum=%d",sum);
	return 0;
}
