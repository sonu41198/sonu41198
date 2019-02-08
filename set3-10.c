#include <stdio.h>

int main()
{
	int hr[2],mins[2],j,min,hour,diff,res[2];
	for(j=0;j<2;j++)
	{
	    scanf("%d %d",&hr[j],&mins[j]);
	}
	for(j=0;j<2;j++)
	{
	    res[j]=(hr[j]*60)+mins[j];
	}
	if(res[0]>res[1])
	{
	    diff=res[0]-res[1];
	}
	else
	{
	    diff=res[1]-res[0];
	}
	hour=diff/60;
	min=diff%60;
	printf("%d %d",hour,min);
	return 0;
}
