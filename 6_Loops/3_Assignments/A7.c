/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 03-09-2025
Program Name : print pyramid pattern
Sample Input : 5
Sample Output: 

              5
              4 5
              3 4 5
              2 3 4 5
              1 2 3 4 5
              2 3 4 5
              3 4 5
              4 5
              5

*/

#include <stdio.h> // For input and output

int main()
{
    int num; // 'num' is user input

    // Get number from user
    //printf("Enter the number: ");
    scanf("%d", &num);

    // Run only if number is positive
    if (num > 0)
    {
        // Print top half of pyramid
        for(int i = num; i >= 1; i--)
        {
            for(int j = i; j <= num; j++)
            {
                printf("%d ", j); // Print numbers from i to num
            }
            printf("\n"); // Move to next line
        }

        // Print bottom half of pyramid
        for(int i = 2; i <= num; i++)
        {
            for(int j = i; j <= num; j++)
            {
                printf("%d ", j); // Print numbers from i to num
            }
            printf("\n"); // Move to next line
        }
    }

    return 0; // End program
}