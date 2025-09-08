#include <stdio.h>

int main()
{
   int target = 5;
   
   for(int i=0;i<10;i++)
   {
       printf("%d escaped\n",i);
       
       if(i == target)
       {
           printf("found the no. %d\n",i);
           break;
       }
       
   }
    
}