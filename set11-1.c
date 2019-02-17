#include <stdio.h>

int main()
{
    char a[50];
    int i,count=0,n;
    scanf("%s",&a);
    scanf("%d",&n);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(i=count;i>=count-n;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
