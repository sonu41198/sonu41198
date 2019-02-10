#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d %d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("a:%d\nb:%d",a,b);
    return 0;
}
