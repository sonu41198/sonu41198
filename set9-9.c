#include <stdio.h>

int main(void) 
{
	char s[50],temp[50];
	int i,k,j;
	printf("\nenter the string:");
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]>s[j])
			{
				temp[k]=s[i];
				s[i]=s[j];
				s[j]=temp[k];
		}	}
	}
	printf("\n%s",s);
	return 0;
}
