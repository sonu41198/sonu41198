int main(void) 
{
	int num,l,r;
	printf("\n enter the number:");
	scanf("%d",&num);
	printf("\n enter the left and right range:");
	scanf("%d %d",&l,&r);
	if(num>l && num<r)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
