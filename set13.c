#iclude<stdio.h>
#include<conio.h>
int main()
{
char character;
printf("enter eny character:");
scanf("%c",&character);
if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||character=='A'||character=='E'||character=='I'||character=='O'||character=='U')
{
printf("%c is vowel",character);
}
else
{
printf("%c is Consonant",character);
}
return 0;
}
