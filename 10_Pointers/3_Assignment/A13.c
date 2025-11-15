/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 26-09-2025
Program Name : Find 3rd largest element in an array
Sample Input :

Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8

Sample Output:

Third largest element of the array is 4
*/

#include <stdio.h>      // For standard input/output functions

// Function to find the third largest element in the array
int thirdlargest(int arr[], int size)
{
    // Step 1: Find the largest element
    int first = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
        {
            first = arr[i];
        }
    }

    // Step 2: Find the second largest element
    int second = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }

    // Step 3: Find the third largest element
    int third = -2;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > third && arr[i] < second)
        {
            third = arr[i];
        }
    }

    return third;
}

// Main function where the logic is executed
int main()
{
    int size;

    // Prompt user to enter size
    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    int arr[size];

    // Prompt user to enter elements
    printf("Enter the elements into the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display the third largest element
    printf("Third largest element of the array is %d\n", thirdlargest(arr, size));

    return 0;
}