/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 11-09-2025
Program Name : Generate AP, GP, HP series
Sample Input : 

Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5

Sample Output: 

AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428

*/

#include <stdio.h> // For input and output functions

int main()
{
    // Declare variables for first term, common difference/ratio, and number of terms
    int first, difference, terms;

    // Get the first number from the user
    printf("Enter the First Number 'A': ");
    scanf("%d", &first);

    // Get the common difference or ratio from the user
    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d", &difference);

    // Get the number of terms from the user
    printf("Enter the number of terms 'N': ");
    scanf("%d", &terms);

    // Initialize variables for AP, GP, and HP series
    int ap1 = first, ap2 = first, gp = first;
    float hp = ap2;

    // Check if number of terms is valid
    if (terms > 0)
    {
        // Print AP series
        printf("AP = ");
        for (int i = 0; i < terms; i++)
        {
            printf("%d,", ap1);       // Print current AP term
            ap1 = ap1 + difference;   // Calculate next AP term
        }

        // Print GP series
        printf("\nGP = ");
        for (int i = 0; i < terms; i++)
        {
            printf("%d,", gp);        // Print current GP term
            gp = gp * difference;     // Calculate next GP term
        }

        // Print HP series
        printf("\nHP = ");
        for (int i = 0; i < terms; i++)
        {
            printf("%.6f,", 1 / hp);  // Print current HP term
            ap2 = ap2 + difference;   // Update value for next HP term
            hp = ap2;
        }
    }
    else
    {
        // Show error if number of terms is not valid
        printf("Invalid input");
    }

    return 0; // End of program
}