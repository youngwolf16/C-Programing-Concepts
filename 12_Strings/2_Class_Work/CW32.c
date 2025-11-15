#include <stdio.h>

int str_len(char *str)
{
    int length = 0;
    while(*str!='\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    
    char str[50] = "";
    scanf("%s",str);
    printf("String length is %d",str_len(str));
    
}