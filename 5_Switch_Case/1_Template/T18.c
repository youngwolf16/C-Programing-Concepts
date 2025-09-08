//switch case for simple calculator

#include <stdio.h>

int main()
{
    int num1,num2;
    char c;
    //printf("Enter number1, operator and number2: ");
    scanf("%d %c %d",&num1,&c,&num2);
    
    switch (c)
    {
    case '+':
    printf("%d",num1+num2);
    break;
    case '-':
    printf("%d",num1-num2);
    break;
    case '*':
    printf("%d",num1*num2);
    break;
    case '/':
    printf("%d",num1/num2);
    break;
    default:
    printf("Invalid operation!");
    }
    
    return 0;
}