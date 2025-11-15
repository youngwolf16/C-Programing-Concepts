#include <stdio.h>

void sqube(int num,int *square, int *cube)
{
    *square = num * num;
    *cube = num * num * num;
}

int main()
{
    int num;
    int square  =0,cube = 0;
    scanf("%d",&num);
    sqube(num,&square,&cube);
    
    printf("Square is %d\n",square);
    printf("Cube is %d\n",cube);
    
    return 0;
}