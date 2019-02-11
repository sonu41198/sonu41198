#include <stdio.h>

int main(void) {
	int x[10],y[10],z[10];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
		z[i]=x[i]-y[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",z[i]);
	}
	return 0;
}
