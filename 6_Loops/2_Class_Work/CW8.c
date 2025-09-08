//print line pattern

#include <stdio.h>

int main()
{
    int n,m;
    char dollar='$',star ='*';
    
    //printf("Enter n : ");
    scanf("%d",&n);
    //printf("\nEnter m : ");
    scanf("%d",&m);
    
    for(int i=1;i<=1;i++)
    {
        for(int j=0;j<n;j++)
        {
    
            if(j>m-1&&j<m*2){
                printf("%c",star);
            }
            else
            {
                printf("%c",dollar);
            }
        }
    }
    
    return 0;
}