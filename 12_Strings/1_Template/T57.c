#include <stdio.h>

void find(char *str, char find1, int *found)
{
    int i = 0;
    *found = 0;
    while(str[i]!='\0')
    {
        if(str[i]==find1)
        {
            *found = 1;
            break;
        }
        else
        {
            int j = i;
            while(str[j]!='\0')
            {
            str[j] = str[j+1];
            j++;
            }
        }
      
        
    }
}

int main()
{
    char str[100];
    char find1;
    int found=0;
    scanf("%[^\n]",str);
    getchar();
    scanf("%c",&find1);
    find(str,find1,&found);
    if(found == 1)
    {
         printf("%s",str);
    }
   else
   {
       printf("Character is not found in the string");
   }
    return 0;
}