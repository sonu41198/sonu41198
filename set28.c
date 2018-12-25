#include<stdio.h>
#include<conio.h>
int amstrong();
int main()
{
int a,b,ams;
clrscr();
scanf("%d %d",&a,&b);
amstrong(a,b);
getch();
return 0;
}
int amstrong(int x,int y)
{
int i,j,t1,f=1,temp,rem,count=0,sum=0;
for(i=x;i<=y;i++)
{
temp=i;
while (i>0)
{
  i=i/10;
  count++;
}
t1=count;
i=temp;
while(i>0)
{
 rem=i%10;
 while(count>0)
 {
   f=f*rem;
   count--;
 }
 sum=sum+f;
 i=i/10;
 f=1;
 count=t1;
}
if(temp==sum)
{
 printf("%d is amstrong",temp);
}
i=temp;
sum=0;
rem=0;
count=0;
}
return 0;
}
