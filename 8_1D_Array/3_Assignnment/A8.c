/*
Documentation

Name         : S Sanjay Kumar
Language     : C
Date         : 09-09-2025
Program Name : find the median of two unsorted arrays
Sample Input : 

Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5

Sample Output: 

Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5   

*/

#include <stdio.h> // Include standard input/output library

int main()
{
    int size1=0, size2=0; // Variables to store sizes of Array A and Array B

    int temp1=0, temp2=0; // Temporary variables used for swapping during sorting

    float median1, median2, median3; // Variables to store medians of Array A, Array B, and combined median

    // Get size of Array A from user
    printf("Enter the 'n' value for Array A: ");
    scanf("%d", &size1);

    // Get size of Array B from user
    printf("Enter the 'n' value for Array B: ");
    scanf("%d", &size2);

    // Declare arrays with given sizes
    int arr1[size1], arr2[size2];

    // Get elements of Array A from user
    printf("Enter the elements one by one for Array A: ");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Get elements of Array B from user
    printf("Enter the elements one by one for Array B: ");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Sort Array A using bubble sort
    for(int i = 0; i < size1 - 1; i++)
    {
        for(int j = 0; j < size1 - i - 1; j++)
        {
            if(arr1[j] > arr1[j + 1])
            {
                temp1 = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp1;
            }
        }
    }

    // Sort Array B using bubble sort
    for(int i = 0; i < size2 - 1; i++)
    {
        for(int j = 0; j < size2 - i - 1; j++)
        {
            if(arr2[j] > arr2[j + 1])
            {
                temp2 = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp2;
            }
        }
    }

    // Find median of Array A
    if(size1 % 2 != 0) // If size is odd
    {
        median1 = (float)arr1[size1 / 2];
    }
    else // If size is even
    {
        median1 = (arr1[size1 / 2] + arr1[(size1 / 2) - 1]) / (float)2;
    }

    // Find median of Array B
    if(size2 % 2 != 0) // If size is odd
    {
        median2 = (float)arr2[size2 / 2];
    }
    else // If size is even
    {
        median2 = (arr2[size2 / 2] + arr2[(size2 / 2) - 1]) / (float)2;
    }

    // Calculate average of both medians
    median3 = (median1 + median2) / 2;

    // Display the results
    printf("Median of array1 : %g\n", median1);
    printf("Median of array2 : %g\n", median2);
    printf("Median of both arrays : %g\n", median3);

    return 0; // Program executed successfully
}