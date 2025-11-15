/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 24-09-2025
Program Name : find factorial of given number using recursion

Sample Input :

Enter the character: 7

Sample Output:

Factorial of the given number is 5040

*/

#include <stdio.h>

// Static variables to retain values across recursive calls
static int num;           // Stores the input number
static int fact = 1;      // the factorial result
static int flag = 1; // Flag 

int main() {
    // Read input only on the first call
    if (flag) {
        scanf("%d", &num);     // Take input from user
        flag = 0;             // Reset flag after first input

        // special case: factorial of 0 is 1
        if (num == 0) {
            printf("Factorial of the given number is 1\n");
            return 0;          // Terminate program
        }

        // invalid input: negative numbers
        if (num < 0) {
            printf("Invalid Input\n");
            return 0;          // Terminate program
        }
    }

    // Recursive case
    if (num > 0) {
        fact = fact * num;      // Multiply current number
        num--;                 // Decrement number
        return main();         // Recursive call to main
    }

    // Base case reached after recursion print result
    printf("Factorial of the given number is %d\n", fact);
    return 0;                  // Terminate program
}