#include<stdio.h>
#include<string.h>
int main() {
	char a[100],b[100];
	int i,n2,n1;
	scanf("%s",a);
	scanf("%s",b);
	n2=strlen(a);
	n1=strlen(b);
    if(n2==n1)
    {
        printf("%s",b);
    }
    else if(n2>n1)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
	 return 0;
}
