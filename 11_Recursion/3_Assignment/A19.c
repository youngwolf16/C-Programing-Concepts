/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 24-09-2025
Program Name : generate positive Fibonacci numbers using recursion
Sample Input : 8
Sample Output: 0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h> // Preprocessor directive for standard input/output functions

//function to calculate fibbonacci anf print in recursion
int fibbonacci(int num,int first, int second, int sum) 
{
    if(sum<=num) //base case - checking condition to print number upto the user input number
    {
         // printing the fibonacci numbers
            printf("%d, ", sum);
            first = second;       // assigning first number as second
            second = sum;         // assigning second number as first
            sum = first + second; // adding first and second storing in sum
            fibbonacci(num,first,second,sum);
    }
}

// Main function where the logic is executed
int main()
{
    // Initialize required Variables
    int num, first = 0, second = 1, sum = 0;

    // accepting input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // checking the number is not negative
    if (num > 0)
    {
        fibbonacci(num,first,second,sum); //calling the recursive function
        printf("\n");
    }
    // checking the number is zero
    else if(num == 0)
    {
        printf("%d",sum); //prints the output
    }
    
    // printing error message if number is negative
    else
    {
        printf("Invalid input");
    }

    // Program executed successfully
    return 0;
}