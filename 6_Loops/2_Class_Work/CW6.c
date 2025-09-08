#include <stdio.h>

int main()
{
    int num,num1,rev=0,rem=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    num1 = num;
    
    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    
    printf("%d\n",rev);
    
    if(num1==rev){
        printf("The Entered number is an palindrome");
    }
    else{
        printf("The Entered number is not an palindrome");
    }
    
}