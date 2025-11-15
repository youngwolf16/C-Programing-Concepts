/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 26-09-2025
Program Name : Check whether a given number is prime or not using function
Sample Input :

Enter a number: 2

Sample Output:

2 is a prime number
*/

#include <stdio.h> // Standard I/O header

// Function to check whether a number is prime
int isprime(int num)
{
    // Any number less than 2 is not prime
    if (num < 2)
        return 1; 

    int out = 0; // Flag to indicate non-prime (0 = prime, 1 = not prime)

    // Loop from 2 to num-1 to check for divisibility
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            out = 1; //Updating the flag value
            break;   
        }
    }

    return out; // Return 0 if prime
}

// Main function
int main()
{
    int num; // Variable to store user input

    // Prompt user to enter a number
    //printf("Enter a number: ");
    scanf("%d", &num);
     
    if(num>0){ //checkts the number is greater then 0
    // checks whether its prime or not using flag value returnrd from the function
    if (isprime(num) == 1)
    {
        printf("%d is not a prime number", num); //if flag value is 1
    }
    else
    {
        printf("%d is a prime number", num); //if flag value is 0
    }
    }
    else //if number is less than 0
    {
        printf("Invalid input\n");
    }

    return 0; // Program executed successfully
}