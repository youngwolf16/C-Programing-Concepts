#include <stdio.h>

int main()
{
    int n,powr=1;
    //printf("Enter the number : ");
    scanf("%d", &n);
    
    if(n<1){
        printf(" Error : Number should be an positive number.\n");
    }
    else{
   for(int i=1;i<=n;i++)
   {
       printf("%d ",powr);
       powr = 2 *powr;
   }
    }
    return 0;
}