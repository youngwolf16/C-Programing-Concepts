#include <stdio.h>

void reverse(char str[], int start, int end)
{
    char temp;
    while(start<end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start ++;
        end--;
    }
}

int main()
{
    
    char str[100];
    int i = 0, start = 0;
    scanf("%[^\n]", str);
    
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            reverse(str, start,i-1);
            start = i+1;
        }
        i++;
    }
    
    reverse(str, start,i-1);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}