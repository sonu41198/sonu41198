#include<stdio.h>        
int main()
{
    int n,s[10],i,max=-999;
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
    printf("%d",max);
    return 0;
}
