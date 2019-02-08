#include <stdio.h>
#include <string.h>
int main()
{
char a[100];
int count=0,i;
clrscr();
printf("\n Enter the sentence:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
count++;    
}
printf("\n Number of words are: %d",count+1);
getch();
return 0;
}
