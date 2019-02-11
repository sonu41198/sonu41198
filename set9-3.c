#include <stdio.h>

int main(void) 
{
	int x,y,i;
	char ss;
	for(i=1;i<=4;i++)
	{
		scanf("%d %c %d",&x,&ss,&y);
		if(ss=='/')
		{
			printf("%d\n",x/y);
		}
		else
		{
			printf("%d\n",x%y);
		}
	}
	return 0;
}
