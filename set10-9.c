#include <stdio.h>
int main(void) 
{
	int a,b,c,n;
	scanf("%d %d %d",&a,&b,&c);
	n=((a*b)%c);
	printf("\n%d",n);
	return 0;
}
