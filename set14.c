#include<stdio.h>
#include<conio.h>
int main()
{
char a;
printf("enter the character:");
scanf("%c",&a);
if(a>=65 && a<97 || (a>=97 && a<=122))
{
printf("%c is an alphabet",a);
}
else
{
printf("%c is not alphabet",a);
}
return 0;
}
