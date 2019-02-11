#include <stdio.h>
#include<string.h>
int main(void) {
	char z[10];
	int i,j;
	scanf("%s",z);
	j=strlen(z);
	for(i=0;i<j;i++)
	{
		if(i%2==0)
		{
			printf("%c",z[i]);
		}
		
	}
	printf("\t");
	for(i=0;i<j;i++)
	{
		if(i%2!=0)
		{
			printf("%c",z[i]);
		}
		
	}
	return 0;
}
