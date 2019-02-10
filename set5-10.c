#include <stdio.h>
int main()
{
	int n,i,a=1,pow=2;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    a=a*pow;
	    if(a==n)
	    {
	        printf("%d is a power of 2",n);
	        break;
	    }
	}
        if(a!=n)
	    {
	        printf("%d is not a power of 2",n);
	    }
	return 0;
}
