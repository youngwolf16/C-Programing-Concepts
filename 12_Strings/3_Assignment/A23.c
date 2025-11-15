/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 09-10-2025
Program Name : to implement atoi function

Sample Input : 

Enter a numeric string: 12345-

Sample Output:

String to integer is 12345

*/

#include <stdio.h>

// Convert string to integer
int my_atoi(char *str)
{
    int num = 0, i = 0, flag = 1;

    // Check for negative sign
    if (str[i] == '-') {
        flag = -1;
        i++;
    }
    // Check for positive sign
    else if (str[i] == '+') {
        i++;
    }

    // Convert numeric characters to integer
    while (str[i] >= '0' && str[i] <= '9') {
        num = num * 10 + (str[i] - '0');  // form the number
        i++;
    }

    return flag * num;  // multiply the flag value and return the result
}

int main()
{
    char str[20];  // input string

    printf("Enter a numeric string: ");
    scanf("%s", str);  // Read string 

    // Print converted integer
    printf("String to integer is %d\n", my_atoi(str));
}