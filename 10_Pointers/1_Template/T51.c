#include <stdio.h>

int main()
{

int hex = 0x12345678;

char *cptr = (char*)&hex;

if(*cptr == 0x78)
{
    printf("Ours is a little endian");
}
else
{
    printf("ours is a big endian system");
}

return 0;

}