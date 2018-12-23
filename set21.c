#include<stdio.h>
#include<conio.h>
int main()
{
	int n,k,ans=1;
	printf("enter the number & power");
	scanf("%d %d",&n,&k);
	while(k>0)
	{
		ans=ans*n;
		k--;
	}
	printf("answer=%d",ans);
	return 0;
}
