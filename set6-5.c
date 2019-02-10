
#include<stdio.h>
int main()
{
    int num,m,res;
    scanf("%d",&num);
    scanf("%d",&m);
    res=num*m;
    if(res%2==0)
    {
        printf("%d is even",res);
    }
    else
    {
        printf("%d is odd",res);
    }
    return 0;
}
