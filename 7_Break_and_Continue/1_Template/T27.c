#include <stdio.h>

int main()
{
    int result = 5, found=0;
    
    for(int i=0;i<4 && !found;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("The Value of i+j is %d\n",i+j);
            
            if(i+j==result){
                printf("The Value of i+j is %d found it!\n",i+j);
                found = 1;
                break;
            }
            
        }
    }
}