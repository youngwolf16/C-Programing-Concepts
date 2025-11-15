#include <stdio.h>

int my_substring(char str1[], char str2[])
{
    
    int found,j;
    
    for(int i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i+j]!=str2[j])
            {
                break;
            }
        }
        
        if(str2[j]=='\0')
        {
            printf("%s\n", &str1[i]);
            return 1;
        }
    }
    
    return 0;
    
}

int main()
{
    
    char str1[100];
    char str2[100];
    
    scanf("%[^\n]", str1);
    getchar();
    scanf("%[^\n]", str2);
    
    int result = my_substring(str1,str2);
    
    if(result == 0)
    {
        printf("sub string is not found\n");
    }
    
    
}