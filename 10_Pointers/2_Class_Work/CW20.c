#include <stdio.h>

int main()
{
    
    int num = 0x12345678;
    
    char *c = &num;
    
    if(*c==0x78)
    {
        printf("It is little endian system");
    }
    else{
        printf("big endian");
    }
    
}