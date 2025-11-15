/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 05-10-2025
Program Name : Print the values in sorted order without modifying or copying array
Sample Input : 

Enter the size : 5
Enter 5 elements 
10 1 3  8 -1

Sample Output:
After sorting: -1 1 3 8 10
Original array values 10 1 3 8 -1
*/

#include <stdio.h> // Preprocessor directive for standard input/output functions

// Function to print array elements in sorted order without modifying the original array
void fun(int *arr1, int size, int *smallest, int *largest)
{
    int sec_small = *largest; // Temporary variable to find next smallest value

    printf("After sorting: ");

    // Loop to print sorted values one by one
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *smallest); // Print current smallest value

        // Find the next smallest value greater than current smallest
        for (int j = 0; j < size; j++)
        {
            if (arr1[j] > *smallest && arr1[j] < sec_small)
            {
                sec_small = arr1[j]; // Update next smallest
            }
        }

        *smallest = sec_small;     // Move to next smallest for next iteration
        sec_small = *largest;      // Reset sec_small for next search
    }
}

// Main function where the logic is executed
int main()
{
    int size; // Declare size of array

    scanf("%d", &size); // Read size of the array from user

    int arr1[size]; // Declare input array

    int largest, smallest; // Variables to hold initial largest and smallest values

    // Read elements into arr1
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Initialize largest and smallest with first element
    largest = arr1[0];
    smallest = arr1[0];

    // Find actual smallest and largest values in the array
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] > largest)
        {
            largest = arr1[i];
        }
        else if (arr1[i] < smallest)
        {
            smallest = arr1[i];
        }
    }

    // Call function to print sorted values without modifying original array
    fun(arr1, size, &smallest, &largest);

    // Print original array to show it remains unchanged
    printf("\nOriginal array values ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0; // Program executed successfully
}