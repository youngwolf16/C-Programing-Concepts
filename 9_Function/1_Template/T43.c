#include <stdio.h>

float celcius(int farh)
{
 
 float celsius;
 
 celsius = (float)(farh-32)*5/9.0;

 return celsius;

}

int main()

{
    int f;
    scanf("%d",&f);
    printf("%g",celcius(f));
    
}