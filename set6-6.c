#include <stdio.h>
#include<string.h>
int main() 
{
	char s[100];
	int i,n,count=0,countt=0,count1=0;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	    if((s[i]>='a')&&(s[i]<='z')||(s[i]>='A')&&(s[i]<='Z'))
	    {
	       count=1;
	    }
	    else if((s[i]>=0)&&(s[i]>=9))
	    {
	        countt=1;
	    }
	    else
	    {
	        count1=1;
	    }
	}
	if((count==1)&&(countt==1))
	{
	    printf("yes..string contains both alphabets and numbers");
	}
	else
	{
	    printf("no");
	}
	return 0;
}
