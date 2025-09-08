//pattern tiangle digits incrementing

#include <stdio.h>

int main()
{
    int count, num=1;
    
    printf("Enter max lines: ");
    
    scanf("%d",&count);
    
    for (int i=0;i<count;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",num);
            num = num+1;
        }
        printf("\n");
    }
    
}