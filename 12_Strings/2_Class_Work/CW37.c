#include <stdio.h>

int length(char str1[])
{
    int i = 0;
    
    while(str1[i]!='\0')
    {
        i++;
    }
    
    return i;
}

int my_strcmp(char str1[], char str2[], int num)
{
    
    int i = 0, flag = 0;
    
    while(i<num)
    {
        flag = 0;
        
        if(str1[i]==str2[i])
        {
            flag = 1;
        }
        
        i++;
        
    }
    
    return flag;
    
}

int main()
{
    char str1[40], str2[40];
    int num = 0;
    
    scanf("%[^\n]", str1);
    getchar();
    scanf("%[^\n]", str2);
    scanf("%d", &num);
    
    int length1 = length(str1);
    int length2 = length(str2);
    int result  = 0, f = 0;
    if(length1 < length2)
    {
        printf("str1 is less than str2\n");
        f = 1;
    }
    else if(length1 > length2)
    {
        printf("str2 is less than str1");
        f = 1;
    }
    else
    {
        result = my_strcmp(str1, str2, num);
    }
    
    if(result == 1 && f == 0)
    {
        printf("str1 is equal to str2\n");
    }
    else if(result == 0 && f == 0)
    {
        printf("str1 is  not equal to str2\n");
    }
   
    
    

    return 0;
}