#include <stdio.h>
int main(void) 
{
int n,remainder,reverse=0;
printf("\n enter the number:");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10; 
} 
printf("\n%d",reverse);
return 0;
}
