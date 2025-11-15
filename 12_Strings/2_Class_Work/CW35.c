#include <stdio.h>

void my_cpy(char *str1, char *str2, int *length)
{
    int i = 0;
    while(str1[i]!='\0')
    {
        
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    
    *length = i;
}

void reverse (char *str2,int length)
{
    int len = length/2, i =0;
    char temp;
    
    while(i<=len)
    {
        temp = str2[i]; 
        str2[i] = str2[length-i-1];
        str2[length-i-1] = temp;
        
        i++;
    }
    
}

int compare(char *str1, char *str2)
{
    
    int i =0, flag = 0;
    
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
    
    return flag;
}

int main()
{
    
    char str1[40], str2[40];
    int length = 0;
    
    scanf("%[^\n]", str1);
    
    my_cpy(str1,str2, &length);
    
    //printf("%s %d", str2, length);
    
    reverse(str2, length);
    
    //printf("%s",str2);
    
    int result = compare(str1,str2);
    
    //printf("%d", result);
    
    if(result == 1)
    {
        printf("Yes, Entered string is palindrome.\n");
    }
    else
    {
        printf("No, Entered string is not palindrome,\n");
    }
    
    
    
    return 0;
}