#include <stdio.h>
int main()
{
    int n,r=0,t=0;
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        r=(r*10)+t;
        n=n/10;
    }
    n=r;
    r=0;
    t=0;
    while(n!=0)
    {
        t=n%10;
        if(t%2==1)
        {
            printf("%d ",t);
        }
        r=(r*10)+t;
        n=n/10;
    }
    return 0;
}
