#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    scanf("%d",&num);
    if(num>9)
    {
        while(num!='\0')
        {
           rem=num%10;
           rev=(rev*10)+rem;
           num=num/10;
        }
        num=rev;
        rem=0;
        while(num!='\0')
        {
            rem=num%10;
           switch(rem)
           {
             case 0:printf("zero ");
               break;
             case 1:printf("one ");
                   break;
            case 2:printf("two ");
                   break;
             case 3:printf("three ");
                   break;
             case 4:printf("four ");
                   break;
             case 5:printf("five ");
                   break;
             case 6:printf("six ");
                   break;
             case 7:printf("seven ");
                   break;
             case 8:printf("eight ");
                   break;
             case 9:printf("nine ");
                   break;  
           }
          
           num=num/10;
        }
        
    }
    else
    {
    switch(num)
    {
        case 0:printf("zero");
               break;
         case 1:printf("one");
               break;
        case 2:printf("two");
               break;
         case 3:printf("three");
               break;
         case 4:printf("four");
               break;
         case 5:printf("five");
               break;
         case 6:printf("six");
               break;
         case 7:printf("seven");
               break;
         case 8:printf("eight");
               break;
         case 9:printf("nine");
               break;
    }
    }
    return 0;
}
