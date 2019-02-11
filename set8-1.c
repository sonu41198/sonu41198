#include<stdio.h>
int main()
{
int r=0,t;
char a;
printf("enter the string:");
scanf("%s",&a);
t=a;
while(t!='\0')
{
r=r*10;
r=r+t%10;
t=t/10;
}
if(a==r)
{
printf("it is a palindrome");
}
else
{
printf("it is not a palindrome");
}
return 0;
}
