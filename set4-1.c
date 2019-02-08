#include <stdio.h>
#include<string.h>
int main() 
{
	char arr[100];
	int n,i,count=0;
	scanf(" %[^\t\n]s",arr);
	n=strlen(arr);
	for(i=0;i<n;i++)
	{
	 if(arr[i]>='a'&&arr[i]<='z'||arr[i]>='A'&&arr[i]<='Z')
	 {
	     count++;
	 }
	}
	printf("%d",count);
	return 0;
}
