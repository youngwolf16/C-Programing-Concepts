#include <stdio.h>

int main(){
    int n,m,res=0;
    printf("Enter the two numbers : ");
    scanf("%d %d",&n,&m);
    
    for(int i=1;i<=n;i++){
        res = res + m;
    }
    
    printf("The Result is %d",res);
    
}