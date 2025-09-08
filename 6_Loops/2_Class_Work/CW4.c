//print triangle letter increment

#include <stdio.h>

int main()
{
    int count,increment = 65;
    char print;
    printf("Enter max lines : ");
    scanf("%d",&count);
    
    for(int i=0;i<count;i++){
        for(int j=0;j<=i;j++){
            print = increment;
            printf("%c ",print);
            increment++;
        }
        printf("\n");
    }
    
    
    
}