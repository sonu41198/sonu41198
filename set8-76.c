
#include <stdio.h>

int main()
{
    int i,n,c=2;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c>2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
