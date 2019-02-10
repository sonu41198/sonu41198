#include<stdio.h>
int main()
{
    int count=0,n,num,i,a[50];
    scanf("%d %d",&n,&num);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
