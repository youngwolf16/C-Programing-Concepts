#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    char *ptr = &a;
    printf("Character entered is %c",*ptr);
}