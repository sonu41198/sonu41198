#include <stdio.h>
int main()
{
    int i,n,m,s,ss,c=0;
    scanf("%d %d",&n,&m);
    s=n*m;
    for(i=1;i<=s;i++)
    {
        ss=(i*i);
        if(s==ss)
        {
            c++;
            printf("yes");
            break;
        }
    }
    if(c==0)
        {
            printf("no");
        }
    return 0;
}
