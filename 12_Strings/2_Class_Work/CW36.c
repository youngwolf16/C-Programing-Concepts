#include <stdio.h>

void reverse(char *str)
{
    int length = 0;
    char temp;
    while(str[length]!='\0')
    {
        length++;
    }
    
    for(int j=0;j<length/2;j++)
    {
        temp = str[j];
        str[j] = str[length-j-1];
        str[length-j-1] = temp;
    }
    
}

int main()
{
    char str[40];
    
    scanf("%[^\n]", str);
    
    reverse(str);
    
    printf("Reversed string is %s\n", str);
    
    return 0;
}