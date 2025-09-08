//switch case for upper, lower, digit or not

#include <stdio.h>

int main()
{
    char ip;
    printf("Enter a character: ");
    scanf("%c",&ip);
    
    switch (ip){
    
    case 65 ... 90:
    printf("Character is Uppercase");
    break;
    case 97 ... 122:
    printf("Character is Lowercase");
    break;
    case '0' ... '9':
    printf("Character is a digit");
    break;
    default:
    printf("Not an alphabet or digit");
    }
    
}