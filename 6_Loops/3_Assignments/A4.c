/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 01-09-2025
Program Name : check if number is perfect or not
Sample Input : 10
Sample Output: No, entered number is not a perfect number
*/

#include <stdio.h> // Preprocessor directive for standard input/output functions

// Main function where the logic is executed
int main()
{
    // Initialize required Variables
    int num,sum = 0;

    // accepting input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // checking the number is not negative
    if (num > 0)
    {
        // loop to find all proper divisors of the number
        for(int i=1;i<num;i++)
        {
            // check if i is a divisor of num
            if(num%i==0){
                // add the divisor to sum
                sum = sum + i;
            }
        }

        // check if sum of divisors equals the original number
        if(num == sum)
        {
            // number is perfect
            printf("Yes, entered number is perfect number");
        }
        else
        {
            // number is not perfect
            printf("No, entered number is not a perfect number");
        }

    }
    // printing error message if number is negative
    else
    {
        printf("Error : Invalid Input, Enter only positive number");
    }

    // Program executed successfully
    return 0;
}