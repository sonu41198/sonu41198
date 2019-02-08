#include<stdio.h>
int main()
{
    int t,n1,n2;
    scanf("%d %d",&n1,&n2);
    t=n1;
    n1=n2;
    n2=t;
    printf("%d %d",n1,n2);
    return 0;
}
