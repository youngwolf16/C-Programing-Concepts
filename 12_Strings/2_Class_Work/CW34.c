#include <stdio.h>

int compare(char *str1, char *str2)
{
    
    int i = 0, flag = 0;
    
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        flag = 0;
        if(str1[i]==str2[i])
        {
            flag = 1;
        }
        else
        {
            break;    
        }
        
        i++;
    }
    
    if(str1[i]=='\0' && str2[i]=='\0')
    {
        return flag;    
    }
    else
    {
        return 0;
    }
    
    
}

int main()
{
    char str1[40], str2[40];
    
    scanf("%[^\n]", str1);
    getchar();
    scanf("%[^\n]", str2);
    
    int result = compare(str1, str2);
    
    if(result == 1)
    {
        printf("Entered Strings are equal");
    }
    else
    {
        printf("Entered Strings are not equal");
    }
    
    return 0;
}