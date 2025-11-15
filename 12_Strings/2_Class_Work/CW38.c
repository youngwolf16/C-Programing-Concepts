#include <stdio.h>

void str_concat(char *str1, char *str2)
{
   int i=0, j=0;
   
   while(str1[i]!='\0')
   {
       i++;
   }
   
   while(str2[j]!='\0')
   {
       str1[i] = str2[j];
       i++;
       j++;
   }
   
   str1[i] = '\0';
   
}

int main()
{
    char str1[50] = "", str2[50] = "";
    
    /*scanf("49[^\n]", str1);
    getchar();
    scanf("49[^\n]",str2);*/
    
    scanf("%s",str1);
    scanf("%s",str2);
    str_concat(str1,str2);
    
    printf("concatenate string is %s",str1);
    
    
}
