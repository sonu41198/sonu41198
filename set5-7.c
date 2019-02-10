#include <stdio.h>
int main() 
{
	int n,i,s[10],min=99,max=0;
	scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&s[i]);
   }
   for(i=0;i<n;i++)
   {
       if(s[i]>max)
       {
           max=s[i];
       }
   }
   for(i=0;i<n;i++)
   {
       if(s[i]<min)
       {
           min=s[i];
       }
   }
   printf("min:%d\nmax:%d",min,max);
	return 0;
}
