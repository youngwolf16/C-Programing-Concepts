/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 29-08-2025
Program Name : Find which day of the year
Sample Input : 9 3
Sample Output: The day is Wednesday
*/

#include <stdio.h>  // Preprocessor directive for standard input/output functions

// Main function where the logic is executed
int main()
{
    // Declaration of required variables
    int day, first_day, result;

    // Prompting the user to enter the day number (n)
    printf("Enter the value of 'n' : ");
    scanf("%d", &day);

    // Validating if the entered day is within the valid range
    if (day > 0 && day <= 365)
    {
        // Displaying options for the user to choose the first day of the year
        printf("Choose First Day : \n");
        printf("1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");

        // Accepting the user's choice for the first day
        printf("Enter the option to set the first day : ");
        scanf("%d", &first_day);

        // Validating if the chosen first day is within the valid range
        if (first_day >= 1 && first_day <= 7)
        {
            // Calculating the day of the week for the given day number
            result = ((day + first_day - 1) % 7);

            // Displaying the corresponding day of the week
            switch (result)
            {
                case 1:
                    printf("The day is Sunday\n");
                    break;
                case 2:
                    printf("The day is Monday\n");
                    break;
                case 3:
                    printf("The day is Tuesday\n");
                    break;
                case 4:
                    printf("The day is Wednesday\n");
                    break;
                case 5:
                    printf("The day is Thursday\n");
                    break;
                case 6:
                    printf("The day is Friday\n");
                    break;
                case 0:
                    printf("The day is Saturday\n");
                    break;
            }
        }
        else
        {
            // Error message for invalid first day input
            printf("Error: Invalid input, first day should be > 0 and <= 7\n");
        }
    }
    else
    {
        // Error message for invalid day number input
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
    }

    // Program executed successfully
    return 0;
}