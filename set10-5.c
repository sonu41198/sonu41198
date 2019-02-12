#include <stdio.h>

int main(void) 
{
	float p,r,res;
	int s,n;
	scanf("%f %d %f",&p,&n,&r);
	res=((p*n*r)/100);
	s=floor(res);
	printf("\n%d",s);
	return 0;
}
