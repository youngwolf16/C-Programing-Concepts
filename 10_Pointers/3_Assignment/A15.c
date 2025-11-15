/* 
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 05-10-2025
Program Name : remove duplicate elements in a given array
Sample Input : 

Enter the size: 5
Enter elements into the array: 5 1 3 1 5

Sample Output:

After removing duplicates: 5 1 3
*/

#include <stdio.h> // Preprocessor directive for standard input/output functions

// Function to remove dupalicate elements from arr1 and store unique values in arr2
void fun(int *arr1, int size, int *arr2, int *new_size)
{
    arr2[0] = arr1[0];       // First element is always unique, copy it to arr2
    *new_size = 1;           // Initialize new_size to 1 since one unique element is added

    // Loop through each element in arr1
    for (int i = 0; i < size; i++)
    {
        int duplicate = 0;   // Flag to check if current element is a duplicate

        // Check current arr1[i] against all elements in arr2
        for (int j = 0; j < *new_size; j++)
        {
            if (arr1[i] == arr2[j]) // If match found, it's a duplicate
            {
                duplicate = 1;
                break;              // No need to check further
            }
        }

        // If not a duplicate, add it to arr2 and increment new_size
        if (duplicate == 0)
        {
            arr2[*new_size] = arr1[i];
            (*new_size)++;
        }
    }
}

// Main function where the logic is executed
int main()
{
    int size, new_size = 0;         // Declare size of array and initialize new_size

    scanf("%d", &size);             // Read size of the array from user

    int arr1[size], arr2[size];     // Declare input array and output array for unique values

    // Read elements into arr1
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Call function to remove duplicates
    fun(arr1, size, arr2, &new_size);

    // Display the result
    printf("\nAfter removing duplicates: ");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0; // Program executed successfully
}