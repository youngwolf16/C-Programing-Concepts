//print directon using switch case

#include <stdio.h>

int main()
{
    char dir;
    printf("Enter direction: ");
    scanf("%c",&dir);
    
    switch (dir)
    {
        case 'N':
        case 'n':
        printf("North");
        break;
        case 'S':
        case 's':
        printf("South");
        break;
        case 'W':
        case 'w':
        printf("west");
        break;
        case 'E':
        case 'e':
        printf("East");
        break;
        default:
        printf("Invalid input");
    }
    
    return 0;
}