#include <stdio.h>
int main()
{
     int temp,min,a[50],n,i,j;
    // clrscr();
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
         if(a[j]>a[i])
         {
             temp=a[i];
             a[i]=a[j];
            a[j]=temp;
            //printf("%d",a[i]);
         }
        } 
     }
     for(i=0;i<n;i++)
     {
         printf("%d",a[i]);
     }
     return 0;
}
