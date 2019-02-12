#include <stdio.h>

int main(void) 
{
	int le,b,h;
	scanf("%d %d %d",&le,&b,&h);
	int volume,tsa;
	volume=le*b*h;
	tsa=2*((le*b)+(b*h)+(h*le));
	printf("\nVOLUME=%d",volume);
	printf("\nTSA=%d",tsa);
	return 0;
}
