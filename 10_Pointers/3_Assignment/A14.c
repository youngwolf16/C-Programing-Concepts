/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 26-09-2025
Program Name : 2nd largest element in an array
Sample Input :

Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8

Sample Output:

Second largest element of the array is 5
*/

#include <stdio.h> // Preprocessor directive for standard input/output functions

// Function to find the second largest element in the array
int seconglargest(int arr[], int size)
{
    // Step 1: Find the largest element
    int first = arr[0]; // Assume first element is the largest initially

    for (int i = 1; i < size; i++) // Start from index 1 for efficiency
    {
        if (arr[i] > first)
        {
            first = arr[i]; // Update first if a larger element is found
        }
    }

    // Step 2: Find the second largest element
    int second = -1; 

    for (int i = 0; i < size; i++)
    {
        // Check if current element is less than the largest and greater than current second
        if (arr[i] < first && arr[i] > second)
        {
            second = arr[i]; // Update second largest
        }
    }

    return second; // Return the second largest element
}

// Main function where the logic is executed
int main()
{
    int size; // Variable to store size of the array

    // Prompt user to enter size
    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    int arr[size]; // Declare array of given size

    // Prompt user to enter elements
    printf("Enter the elements into the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // Read each element
    }

    // Display the second largest element
    printf("Second largest element of the array is %d\n", seconglargest(arr, size));

    return 0; // Program executed successfully
}