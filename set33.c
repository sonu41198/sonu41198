int main()
{
    int a[50],n,i,mini;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mini=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<mini)
		{
			mini=a[i];
		}
	}
	printf("mini=%d",mini);

    return 0;
}
