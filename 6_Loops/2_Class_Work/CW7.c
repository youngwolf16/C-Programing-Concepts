//triangle using multiple for loop

#include <stdio.h>

int main(){
    
    int num;
    //printf("Enter n : ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(i*2)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    
}