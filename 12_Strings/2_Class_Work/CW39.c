#include <stdio.h>

void rev(char str[])
{
    
int i=0, lastc = 0;

while(str[lastc]!='\0')
{
    lastc++;  
}

printf("Reversed string: ");

/*for(i=lastc-1;i>=0;i--)
{
    if(str[i]==' '||i==0)
    {
        int start = (i==0)?0:i+1;
    int j = start;
    while(j<lastc && str[j]!=' ')
    {
        printf("%c", str[j]);
        j++;
    }
    if(i!=0)
    {
        printf(" ");
    }
    }  
}*/

i = lastc - 1;

while(i>=0)
{
    while(i>=0 && str[i]==' ')
    {
        i--;
    }
    
    int end = i;
    
    while(i>=0 && str[i]!=' ')
    {
        i--;
    }
    
    int start = i + 1;
    
    for(int j = start;j<=end; j++)
    {
        printf("%c", str[j]);
    }
    
    if(i>0)
    {
        printf(" ");
    }
    
}

printf("\n");

    
}

int main()
{
    char str[100];
    
    scanf("%[^\n]", str);
    
    rev(str);
    
    return 0;
}